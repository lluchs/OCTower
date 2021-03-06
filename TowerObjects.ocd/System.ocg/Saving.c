// All progress is saved in a string of maximally 2048 characters. The first four characters specify the version at which is saved.
// Then all remaining characters represent the completed rooms. Each room is represented by an ID which is constructed out of two
// characters from the set [A-Za-z] appended by digits of arbitrary length to store additional information like a collected tablets & jokers.

static const TOWER_Saving_None = 0;
static const TOWER_Saving_Completed = 1;
static const TOWER_Saving_FoundTablet = 2;
static const TOWER_Saving_UsedJoker = 4;
static const TOWER_Saving_FoundJoker = 8;


// Load the player saved data from extra data or league data.
global func LoadPlayerRoomData(int plr)
{
	var plr_id = GetPlayerID(plr);
	var load_string;
	if (GetLeague())
		load_string = GetLeagueProgressData(plr_id);
	else
		load_string = GetPlrExtraData(plr, "OCTowerProgress");
	if (GetType(load_string) != C4V_String)
		return [];
	// Get the version of the loaded save data.
	var load_version = ParseInt(TakeString(load_string, 0, 4));
	// Get a list of the rooms of the form letter letter digits.
	var rooms = RegexMatch(load_string, "[a-zA-Z]{2}[0-9]*");
	// Convert this form to the room id and room data.
	for (var index = 0; index < GetLength(rooms); index++)
	{
		var room_id = GetRoomFromID(TakeString(rooms[index][0], 0, 2));
		// Make sure the saved room still exists in the tower.
		if (room_id == nil)
			continue;
		var room_data = ParseInt(TakeString(rooms[index][0], 2));
		rooms[index] = [room_id, room_data];	
	}
	//Log("Load: plr %d, version %d, load_string %s, rooms %v", plr, load_version, load_string, rooms);
	return rooms;
}

// Load the player room progress from extra data or league data.
global func LoadPlayerCompletedRooms(int plr)
{
	var room_data = LoadPlayerRoomData(plr);
	var rooms = [];
	for (var room in room_data)
		if (room[1] & TOWER_Saving_Completed)
			PushBack(rooms, room[0]);
	return rooms;
}

// Load the player tablet progress from extra data or league data.
global func LoadPlayerFoundTablets(int plr)
{
	var room_data = LoadPlayerRoomData(plr);
	var rooms = [];
	for (var room in room_data)
		if (room[1] & TOWER_Saving_FoundTablet)
			PushBack(rooms, room[0]);
	return rooms;
}

// Load the player joker progress from extra data or league data.
global func LoadPlayerFoundJokers(int plr)
{
	var room_data = LoadPlayerRoomData(plr);
	var rooms = [];
	for (var room in room_data)
		if (room[1] & TOWER_Saving_FoundJoker)
			PushBack(rooms, room[0]);
	return rooms;
}

// Load the player used jokers from extra data or league data.
global func LoadPlayerUsedJokers(int plr)
{
	var room_data = LoadPlayerRoomData(plr);
	var rooms = [];
	for (var room in room_data)
		if (room[1] & TOWER_Saving_UsedJoker)
			PushBack(rooms, room[0]);
	return rooms;
}

// Save the player room progress to extra data or league data.
global func SavePlayerRoomData(int plr)
{
	var plr_id = GetPlayerID(plr);
	var save_version = Format("%04d", GetTowerVersion());
	var save_string = save_version;
	// Loop over all loaded rooms.
	for (var room in GetRoomList())
	{
		// Get the progress for room, jokers, etc.
		var room_data = TOWER_Saving_None;
		if (HasPlayerCompletedRoom(plr, room))
			room_data = room_data | TOWER_Saving_Completed;
		if (HasPlayerFoundTablet(plr, room))
			room_data = room_data | TOWER_Saving_FoundTablet;
		if (HasPlayerFoundJoker(plr, room))
			room_data = room_data | TOWER_Saving_FoundJoker;
		if (HasPlayerUsedJoker(plr, room))
			room_data = room_data | TOWER_Saving_UsedJoker;
		// Only add to save if some data is found.
		if (room_data != TOWER_Saving_None)
			save_string = Format("%s%s%d", save_string, room->GetRoomID(), room_data);
	}
	//Log("Save: plr %d save_string %s", plr, save_string);
	// If league is active store progress there, otherwise store the progress in the player file.
	if (GetLeague())
		SetLeagueProgressData(save_string, plr_id);
	else
		SetPlrExtraData(plr, "OCTowerProgress", save_string);		
	return;
}

// Reset the saved player progress in extra data.
global func ResetPlayerRoomData(int plr)
{
	if (GetLeague())
		return;
	SetPlrExtraData(plr, "OCTowerProgress", nil);
	return;
}
