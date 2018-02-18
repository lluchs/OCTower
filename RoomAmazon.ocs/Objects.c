/* Automatically created objects file */

func InitializeObjects()
{
	var Torch001 = CreateObjectAbove(Torch, 155, 428);
	Torch001->AttachToWall(true);
	Torch001->SetMeshMaterial("Torch", 0);
	Torch001->SetState(3);

	var ItemSpawn001 = ItemSpawn->Create(Boompack,253,423);
	ItemSpawn001->SetPosition(253, 423);

	CreateObjectAbove(LotsOfCoins, 57, 457);
	CreateObjectAbove(LotsOfCoins, 76, 456);

	var Sequence001 = CreateObject(Sequence, 126, 262);
	Sequence001->SetCheckInterval(30);
	Sequence001->SetPosition(126, 262);
	Sequence001->SetTrigger({Interval=30,Trigger="interval"}, 15);
	Sequence001->SetCondition({Function="object_exists",Object={Area={Area=[25,184,195,195],Function="InRect"},Function="find_object_in_area",ID={Function="def_constant",Value=Clonk}}});
	Sequence001->SetAction({Function="create_object",ID={Function="def_constant",Value=Firestone},Rotation={Function="int_constant",Value=0},SpeedR=nil,SpeedX={Function="int_random",Max={Function="int_constant",Value=99},Min={Function="int_constant",Value=-99}},SpeedY={Function="int_random",Max={Function="int_constant",Value=-3},Min={Function="int_constant",Value=-99}}}, nil);

	var Rule_NoPowerNeed001 = CreateObject(Rule_NoPowerNeed, 554, 31);
	Rule_NoPowerNeed001->SetPosition(554, 31);

	var Rule_FastPump001 = CreateObject(Rule_FastPump, 512, 27);
	Rule_FastPump001->SetPosition(512, 27);
	Rule_FastPump001->SetPumpSpeed(50);

	var Fuse001 = CreateObjectAbove(Fuse, 275, 912);
	Fuse001.LineColors = [-10210816,-16711423];
	Fuse->Create();
	var Fuse002 = CreateObject(Fuse, 304, 534);
	Fuse002.LineColors = [-10210816,-16711423];
	Fuse002->SetPosition(304, 534);
	Fuse->Create();
	var Fuse003 = CreateObject(Fuse, 266, 746);
	Fuse003.LineColors = [-10210816,-16711423];
	Fuse003->SetPosition(266, 746);
	Fuse->Create();
	var Fuse004 = CreateObject(Fuse, 264, 744);
	Fuse004.LineColors = [-10210816,-16711423];
	Fuse004->SetPosition(264, 744);
	Fuse->Create();
	var Fuse005 = CreateObject(Fuse, 251, 742);
	Fuse005.LineColors = [-10210816,-16711423];
	Fuse005->SetPosition(251, 742);
	Fuse->Create();
	var Fuse006 = CreateObject(Fuse, 273, 490);
	Fuse006.LineColors = [-10210816,-16711423];
	Fuse006->SetPosition(273, 490);
	Fuse->Create();
	var Fuse007 = CreateObject(Fuse, 250, 261);
	Fuse007.LineColors = [-10210816,-16711423];
	Fuse007->SetPosition(250, 261);
	Fuse->Create();
	var Rule_Gravestones001 = CreateObject(Rule_Gravestones, 223, 423);
	Rule_Gravestones001->SetPosition(223, 423);
	Rule_Gravestones001->SetFadeOut(60);

	var Dynamite001 = CreateObjectAbove(Dynamite, 445, 359);
	Dynamite001->SetYDir(16);
	var Dynamite002 = CreateObject(Dynamite, 435, 362);
	Dynamite002->SetYDir(16);
	Dynamite002->SetPosition(435, 362);

	var Fuse008 = CreateObjectAbove(Fuse, 445, 716);
	Fuse008.LineColors = [-10210816,-16711423];
	Fuse->Create(Dynamite001, Dynamite002);

	var Dynamite003 = CreateObject(Dynamite, 435, 363);
	Dynamite003->SetR(64);
	Dynamite003->SetYDir(16);
	Dynamite003->SetPosition(435, 363);

	var Fuse009 = CreateObjectAbove(Fuse, 421, 729);
	Fuse009.LineColors = [-10210816,-16711423];
	Fuse->Create(Dynamite003, Dynamite002);

	var Dynamite004 = CreateObjectAbove(Dynamite, 447, 359);
	Dynamite004->SetYDir(16);

	var Fuse010 = CreateObjectAbove(Fuse, 435, 723);
	Fuse010.LineColors = [-10210816,-16711423];
	Fuse->Create(Dynamite003, Dynamite004);

	var Dynamite005 = CreateObject(Dynamite, 422, 367);
	Dynamite005->SetR(-34);
	Dynamite005->SetYDir(16);
	Dynamite005->SetPosition(422, 367);

	var Fuse011 = CreateObjectAbove(Fuse, 447, 721);
	Fuse011.LineColors = [-10210816,-16711423];
	Fuse->Create(Dynamite004, Dynamite005);

	var Igniter001 = CreateObjectAbove(Igniter, 348, 335);
	Igniter001->Unstick(7);
	Igniter001->SetDynamiteCount(0);

	var Fuse012 = CreateObject(Fuse, 422, 367);
	Fuse012.LineColors = [-10210816,-16711423];
	Fuse012->SetPosition(422, 367);
	Fuse->Create(Dynamite005, Igniter001);

	var MetalBarrel001 = CreateObjectAbove(MetalBarrel, 529, 383);
	MetalBarrel001->SetColor(0xfffe8a0e);
	MetalBarrel001->SetName("Metallfass mit Magma");

	var DuroLava001 = MetalBarrel001->CreateContents(DuroLava);
	DuroLava001->SetStackCount(300);
	DuroLava001->SetPosition(529, 377);

	var LargeCaveMushroom001 = CreateObjectAbove(LargeCaveMushroom, 171, 377);
	LargeCaveMushroom001->SetClrModulation(0xffdddfed);
	LargeCaveMushroom001->MakeInvincible(false);
	LargeCaveMushroom001->SetSeedAmount(0);
	LargeCaveMushroom001->SetSeedChance(0);

	CreateObjectAbove(Fern, 204, 455);
	CreateObjectAbove(Fern, 469, 445);

	var LargeCaveMushroom002 = CreateObjectAbove(LargeCaveMushroom, 216, 378);
	LargeCaveMushroom002->SetClrModulation(0xffdddfed);
	LargeCaveMushroom002->MakeInvincible(false);
	LargeCaveMushroom002->SetSeedAmount(0);
	LargeCaveMushroom002->SetSeedChance(0);
	var LargeCaveMushroom003 = CreateObjectAbove(LargeCaveMushroom, 194, 374);
	LargeCaveMushroom003->SetClrModulation(0xffdddfed);
	LargeCaveMushroom003->MakeInvincible(false);
	LargeCaveMushroom003->SetSeedAmount(0);
	LargeCaveMushroom003->SetSeedChance(0);

	CreateObjectAbove(Fern, 463, 345);
	CreateObjectAbove(Fern, 252, 376);

	var MetalBarrel002 = CreateObjectAbove(MetalBarrel, 543, 383);
	MetalBarrel002->SetColor(0xfffe8a0e);
	MetalBarrel002->SetName("Metallfass mit Magma");
	MetalBarrel002->Unstick(7);

	var DuroLava002 = MetalBarrel002->CreateContents(DuroLava);
	DuroLava002->SetStackCount(300);
	DuroLava002->SetPosition(543, 377);

	var MetalBarrel003 = CreateObjectAbove(MetalBarrel, 590, 385);
	MetalBarrel003->SetColor(0xfffe8a0e);
	MetalBarrel003->SetName("Metallfass mit Magma");

	var DuroLava003 = MetalBarrel003->CreateContents(DuroLava);
	DuroLava003->SetStackCount(300);
	DuroLava003->SetPosition(590, 379);

	var Basement001 = CreateObject(Basement, 125, 307);
	Basement001->SetPosition(125, 307);
	Basement001->MakeInvincible(false);

	var RoomEntrance001 = CreateObjectAbove(RoomEntrance, 157, 455);
	RoomEntrance001->SetColor(0xff32c832);

	var RoomExit001 = CreateObjectAbove(RoomExit, 502, 231);
	RoomExit001->SetColor(0xffc83232);

	var Idol001 = CreateObjectAbove(Idol, 180, 455);
	Idol001->SetYDir(16);
	Idol001->SetColor(0xff55aa00);
	Idol001->SetMeshMaterial("IdolGrayColor", 0);
	Idol001->SetName("Statue");
	Idol001->MakeInvincible(false);
	Idol001->SetAction("ItemRightLow");
	Idol001->EditorSetItemRight({Bone="Javelin",MeshTransformation=[-1500,0,0,0,0,-1500,0,0,0,0,1500,0],Type=Javelin});
	var Idol002 = CreateObjectAbove(Idol, 349, 382);
	Idol002->SetYDir(16);
	Idol002->SetColor(0xff00557f);
	Idol002->SetMeshMaterial("IdolGrayColor", 0);
	Idol002->SetName("Statue");
	Idol002->MakeInvincible(false);
	Idol002->CustomInitialize("this.MeshTransformation = Trans_Scale(500)");
	Idol002->SetAction("ItemCentral");
	Idol002->EditorSetItemLeft({Bone="main",MeshTransformation=[0,0,1200,0,1200,0,0,0,0,1200,0,-1200],Type=Shield});
	var Idol003 = CreateObjectAbove(Idol, 134, 456);
	Idol003->SetYDir(16);
	Idol003->SetColor(0xffff5500);
	Idol003->SetName("Statue");
	Idol003->MakeInvincible(false);
	Idol003->SetAction("ItemLeftLow");
	Idol003->EditorSetItemLeft({Bone="Javelin",MeshTransformation=[-1500,0,0,0,0,-1500,0,0,0,0,1500,0],Type=Javelin});
	Idol003->EditorSetItemRight({Bone="main",MeshTransformation=nil,Type=nil});
	var Idol004 = CreateObjectAbove(Idol, 112, 359);
	Idol004->SetYDir(16);
	Idol004->SetColor(0xffff007f);
	Idol004->SetName("Statue");
	Idol004->MakeInvincible(false);
	Idol004->CustomInitialize("this.MeshTransformation = Trans_Scale(500)");
	Idol004->SetAction("ItemLeftHigh");
	Idol004->EditorSetItemLeft({Bone="main",MeshTransformation=[-1200,0,0,0,0,-1200,0,0,0,0,1200,0],Type=Axe});

	var StoneDoor001 = CreateObject(StoneDoor, 109, 436);
	StoneDoor001->SetComDir(COMD_Down);
	StoneDoor001->SetPosition(109, 436);
	StoneDoor001->SetPlrViewOnSignalChange(true);

	var FloorSwitch001 = CreateObject(FloorSwitch, 454, 449);
	FloorSwitch001->SetPosition(454, 449);
	FloorSwitch001->SetSwitchTarget(StoneDoor001);
	FloorSwitch001.SwitchMass = 10;

	var Foundry001 = CreateObjectAbove(Foundry, 383, 375);
	Foundry001->SetYDir(16);
	Foundry001->MakeInvincible(false);

	var InventorsLab001 = CreateObjectAbove(InventorsLab, 290, 376);
	InventorsLab001->SetYDir(16);
	InventorsLab001->SetClrModulation(0xff676b14);
	InventorsLab001->SetObjectBlitMode(GFX_BLIT_Mod2);
	InventorsLab001->MakeInvincible(false);

	var Dialogue001 = Idol002->SetDialogue("Statue",false);
	Dialogue001->SetUserDialogue({Actions=[{AfterMessage="next",Function="message",Options=[],Speaker={Function="npc"},TargetPlayers={Function="triggering_player_list"},Text={Function="string_constant",Value={DE="Ich bin eine schüchterne Statue. Ich werde gar nicht mit dir reden!",Function="Translate",US="I am a shy statue. I will never talk to you."}}},{AfterMessage="next",Function="message",Options=[],Speaker={Function="triggering_clonk"},TargetPlayers={Function="triggering_player_list"},Text={Function="string_constant",Value={DE="Du hast gerade etwas zu mir gesagt.",Function="Translate",US="You just said something to me."}}},{AfterMessage="next",Function="message",Options=[],Speaker={Function="npc"},TargetPlayers={Function="triggering_player_list"},Text={Function="string_constant",Value={DE="Ieh!",Function="Translate",US="Eek!"}}}],Function="sequence"}, nil);
	var Dialogue002 = Idol001->SetDialogue("Statue",false);
	Dialogue002->SetUserDialogue({Actions=[{AfterMessage="next",Function="message",Options=[],Speaker={Function="npc"},TargetPlayers={Function="triggering_player_list"},Text={Function="string_constant",Value={DE="Ich bin keine ernsthafte Statue. Ich werde dich stets anlügen.",Function="Translate",US="I am not a serious statue. I will always lie to you."}}},{AfterMessage="next",Function="message",Options=[],Speaker={Function="triggering_object"},TargetPlayers={Function="triggering_player_list"},Text={Function="string_constant",Value={DE="Okay, dann sag mir bitte, wie ich diesen Raum auf keinen Fall lösen kann.",Function="Translate",US="Tell me then, how do I fail this room in the most horrible way?"}}},{AfterMessage="next",Function="message",Options=[],Speaker={Function="npc"},TargetPlayers={Function="triggering_player_list"},Text={Function="string_constant",Value={DE="Ich weiß genau, was du meinst.",Function="Translate",US="I know exactly what you mean."}}}],Function="sequence"}, nil);
	var Dialogue003 = Idol003->SetDialogue("Statue",false);
	Dialogue003->SetUserDialogue({Actions=[{AfterMessage="next",Function="message",Options=[],Speaker={Function="npc"},TargetPlayers={Function="triggering_player_list"},Text={Function="string_constant",Value={DE="Ich bin eine ernsthafte Statue. Ich werde dir immer die Wahrheit sagen.",Function="Translate",US="I am a serious statue. I will always tell you the truth."}}},{AfterMessage="next",Function="message",Options=[],Speaker={Function="triggering_clonk"},TargetPlayers={Function="triggering_player_list"},Text={Function="string_constant",Value={DE="Wie löse ich diesen Raum?",Function="Translate",US="How do I solve this room?"}}},{AfterMessage="next",Function="message",Options=[],Speaker={Function="npc"},TargetPlayers={Function="triggering_player_list"},Text={Function="string_constant",Value={DE="Lass mich ehrlich zu dir sein. Das weiß ich nicht!",Function="Translate",US="I'll be honest with you. I don't know."}}}],Function="sequence"}, nil);
	var Dialogue004 = Idol004->SetDialogue("Statue",false);
	Dialogue004->SetUserDialogue({Actions=[{AfterMessage="next",Function="message",Options=[],Speaker={Function="npc"},TargetPlayers={Function="triggering_player_list"},Text={Function="string_constant",Value={DE="Siehst du diese tolle Axt?",Function="Translate",US="See my nice axe?"}}},{AfterMessage="next",Function="message",Options=[],Speaker={Function="triggering_clonk"},TargetPlayers={Function="triggering_player_list"},Text={Function="string_constant",Value={DE="Ja. Die ist wirklich schön.",Function="Translate",US="Yes. It's really nice."}}},{AfterMessage="next",Function="message",Options=[],Speaker={Function="npc"},TargetPlayers={Function="triggering_player_list"},Text={Function="string_constant",Value={DE="Ich hoffe nur, dass sie kein Feuer fängt.",Function="Translate",US="I just hope it doesn't catch fire."}}}],Function="sequence"}, nil);

	var PlayerStart001 = CreateObject(PlayerStart, 270, 220);
	PlayerStart001->SetPosition(270, 220);
	PlayerStart001->SetStartingMaterial([Shovel,Shovel,Shovel,Shovel,Shovel]);
	PlayerStart001->SetClonkMaxEnergy(5);
	PlayerStart001->SetViewLock(false);

	var Bat001 = CreateObjectAbove(Bat, 391, 439);
	Bat001->SetComDir(COMD_None);
	Bat001->SetYDir(12);
	Bat001->DoEnergy(-15);
	Bat001->Unstick(7);
	var Bat002 = CreateObjectAbove(Bat, 429, 410);
	Bat002->Unstick(7);
	var Bat003 = CreateObjectAbove(Bat, 480, 455);
	Bat003->Kill(Bat003, true);
	Bat003->SetCon(56);
	Bat003->SetYDir(16);
	Bat003->DoEnergy(-20);
	var Bat004 = CreateObjectAbove(Bat, 432, 406);
	Bat004->DoEnergy(-15);
	Bat004->Unstick(7);
	var Mosquito001 = CreateObjectAbove(Mosquito, 235, 403);
	Mosquito001->SetDir(DIR_Right);
	Mosquito001->SetComDir(COMD_UpRight);
	Mosquito001->Unstick(7);
	var Mosquito002 = CreateObjectAbove(Mosquito, 365, 446);
	Mosquito002->SetComDir(COMD_Down);
	Mosquito002->Unstick(7);

	var Cloth001 = InventorsLab001->CreateContents(Cloth);
	Cloth001->SetPosition(290, 335);
	var Cloth002 = InventorsLab001->CreateContents(Cloth);
	Cloth002->SetPosition(290, 335);
	var Cloth003 = InventorsLab001->CreateContents(Cloth);
	Cloth003->SetPosition(290, 335);

	var Key001 = CreateObject(Key, 482, 455);
	Key001->SetR(-42);
	Key001->SetPosition(482, 455);
	Key001->Unstick(7);
	var Key002 = CreateObject(Key, 487, 455);
	Key002->SetR(-39);
	Key002->SetPosition(487, 455);
	var Key003 = CreateObject(Key, 481, 455);
	Key003->SetR(-42);
	Key003->SetPosition(481, 455);
	var Key004 = CreateObject(Key, 490, 455);
	Key004->SetR(-41);
	Key004->SetPosition(490, 455);
	var Key005 = CreateObject(Key, 487, 455);
	Key005->SetR(-39);
	Key005->SetPosition(487, 455);
	var Key006 = CreateObject(Key, 488, 454);
	Key006->SetR(-53);
	Key006->SetPosition(488, 454);
	var Key007 = CreateObject(Key, 488, 455);
	Key007->SetR(-39);
	Key007->SetPosition(488, 455);
	var Key008 = CreateObject(Key, 482, 455);
	Key008->SetR(-41);
	Key008->SetPosition(482, 455);
	Key008->Unstick(7);
	var Key009 = CreateObject(Key, 485, 455);
	Key009->SetR(-41);
	Key009->SetPosition(485, 455);
	var Key010 = CreateObject(Key, 490, 455);
	Key010->SetR(-41);
	Key010->SetPosition(490, 455);
	var Key011 = CreateObject(Key, 488, 454);
	Key011->SetR(-52);
	Key011->SetPosition(488, 454);
	var Key012 = CreateObject(Key, 484, 455);
	Key012->SetR(-39);
	Key012->SetPosition(484, 455);
	Key012->Unstick(7);
	var Key013 = CreateObject(Key, 480, 455);
	Key013->SetR(-41);
	Key013->SetPosition(480, 455);
	Key013->Unstick(7);
	var Key014 = CreateObject(Key, 483, 451);
	Key014->SetR(-142);
	Key014->SetPosition(483, 451);
	Key014->Unstick(7);
	var Key015 = CreateObject(Key, 490, 455);
	Key015->SetR(-41);
	Key015->SetPosition(490, 455);
	var Key016 = CreateObject(Key, 483, 455);
	Key016->SetR(-41);
	Key016->SetPosition(483, 455);
	Key016->Unstick(7);

	var DivingHelmet001 = CreateObject(DivingHelmet, 491, 451);
	DivingHelmet001->SetPosition(491, 451);
	var Axe001 = InventorsLab001->CreateContents(Axe);
	Axe001->SetPosition(290, 335);

	var WindBag001 = CreateObjectAbove(WindBag, 601, 231);
	WindBag001->Unstick(7);
	var WindBag002 = CreateObject(WindBag, 577, 228);
	WindBag002->SetR(-29);
	WindBag002->SetPosition(577, 228);
	WindBag002->Unstick(7);

	var Seaweed001 = CreateObjectAbove(Seaweed, 496, 394);
	Seaweed001->SetYDir(16);
	var Seaweed002 = CreateObjectAbove(Seaweed, 510, 391);
	Seaweed002->SetYDir(16);
	var Seaweed003 = CreateObjectAbove(Seaweed, 539, 383);
	Seaweed003->SetYDir(16);
	var Seaweed004 = CreateObjectAbove(Seaweed, 568, 391);
	Seaweed004->SetYDir(16);
	var Seaweed005 = CreateObjectAbove(Seaweed, 593, 384);
	Seaweed005->SetYDir(16);
	return true;
}
