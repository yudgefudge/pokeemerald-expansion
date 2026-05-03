FallarborTown_Mart_MapScripts::
	.byte 0

FallarborTown_Mart_EventScript_Clerk::
	lock
	faceplayer
	message gText_HowMayIServeYou
	waitmessage
	pokemart FallarborTown_Mart_Pokemart
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end

	.align 2
FallarborTown_Mart_Pokemart:
	.2byte ITEM_GREAT_BALL
	.2byte ITEM_SUPER_POTION
	.2byte ITEM_ELECTIRIZER
	.2byte ITEM_MAGMARIZER
	.2byte ITEM_DUBIOUS_DISC
	.2byte ITEM_PROTECTOR
	.2byte ITEM_RAZOR_CLAW
	.2byte ITEM_RAZOR_FANG
	.2byte ITEM_REAPER_CLOTH
	.2byte ITEM_X_DEFENSE
	.2byte ITEM_DIRE_HIT
	.2byte ITEM_GUARD_SPEC
	pokemartlistend

FallarborTown_Mart_EventScript_Woman::
	msgbox FallarborTown_Mart_Text_DecidingSkittyEvolve, MSGBOX_NPC
	end

FallarborTown_Mart_EventScript_PokefanM::
	msgbox FallarborTown_Mart_Text_SellNuggetIFound, MSGBOX_NPC
	end

FallarborTown_Mart_EventScript_Skitty::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_SKITTY, CRY_MODE_NORMAL
	msgbox FallarborTown_Mart_Text_Skitty, MSGBOX_DEFAULT
	waitmoncry
	release
	end

FallarborTown_Mart_Text_DecidingSkittyEvolve:
	.string "I'm having a hard time deciding if I\n"
	.string "should make my SKITTY evolve or not.\p"
	.string "I only have to use this MOON STONE,\n"
	.string "but it's so hard to decide…\p"
	.string "If I make it evolve, it will become\n"
	.string "much stronger.\p"
	.string "But it will look so different, too.$"

FallarborTown_Mart_Text_Skitty:
	.string "SKITTY: Miyao?$"

FallarborTown_Mart_Text_SellNuggetIFound:
	.string "This NUGGET I found here…\n"
	.string "I suppose I'll have to sell it, seeing\l"
	.string "as how it has no other use.$"

FallarborTown_EventScript_MoveTutor::
	lock
	faceplayer
	goto_if_set FLAG_MET_FALLARBOR_MOVE_TUTOR, FallarborTown_EventScript_ChooseTutorMove
	setflag FLAG_MET_FALLARBOR_MOVE_TUTOR
	goto FallarborTown_EventScript_ChooseTutorMove
	end

FallarborTown_EventScript_ChooseTutorMove::
	message FallarborTown_Text_TeachWhichMove
	waitmessage
	setvar VAR_0x8004, SCROLL_MULTI_FALLARBOR_MOVE_TUTOR
	setvar VAR_0x8006, 0
	special ShowScrollableMultichoice
	waitstate
	switch VAR_RESULT
	case 0, FallarborTown_EventScript_JawLock
	case 1, FallarborTown_EventScript_BodySlam
	case 2, FallarborTown_EventScript_RockSlide
	case 3, FallarborTown_EventScript_DynamicPunch
	case 4, FallarborTown_EventScript_AquaTail
	case 5, FallarborTown_EventScript_Bounce
	case 6, FallarborTown_EventScript_IronHead
	case 7, FallarborTown_EventScript_DrillRun
	case 8, FallarborTown_EventScript_HyperVoice
	case 9, FallarborTown_EventScript_Outrage
	case 10, FallarborTown_EventScript_Superpower
	case 11, FallarborTown_EventScript_MistyExplosion
	case 12, FallarborTown_EventScript_SteelRoller
	case 13, FallarborTown_EventScript_MeteorBeam
	case 14, FallarborTown_EventScript_Poltergeist
	case 15, FallarborTown_EventScript_LashOut
	case 16, FallarborTown_EventScript_ExitTutorMoveSelect
	case MULTI_B_PRESSED, FallarborTown_EventScript_ExitTutorMoveSelect
	end

FallarborTown_EventScript_ChooseNewTutorMove::
	message FallarborTown_Text_TeachWhichMove
	waitmessage
	setvar VAR_0x8004, SCROLL_MULTI_FALLARBOR_MOVE_TUTOR
	setvar VAR_0x8006, 1
	special ShowScrollableMultichoice
	waitstate
	switch VAR_RESULT
	case 0, FallarborTown_EventScript_JawLock
	case 1, FallarborTown_EventScript_BodySlam
	case 2, FallarborTown_EventScript_RockSlide
	case 3, FallarborTown_EventScript_DynamicPunch
	case 4, FallarborTown_EventScript_AquaTail
	case 5, FallarborTown_EventScript_Bounce
	case 6, FallarborTown_EventScript_IronHead
	case 7, FallarborTown_EventScript_DrillRun
	case 8, FallarborTown_EventScript_HyperVoice
	case 9, FallarborTown_EventScript_Outrage
	case 10, FallarborTown_EventScript_Superpower
	case 11, FallarborTown_EventScript_MistyExplosion
	case 12, FallarborTown_EventScript_SteelRoller
	case 13, FallarborTown_EventScript_MeteorBeam
	case 14, FallarborTown_EventScript_Poltergeist
	case 15, FallarborTown_EventScript_LashOut
	case 16, FallarborTown_EventScript_ExitTutorMoveSelect
	case MULTI_B_PRESSED, FallarborTown_EventScript_ExitTutorMoveSelect
	end

FallarborTown_EventScript_JawLock::
	setvar VAR_0x8005, MOVE_JAW_LOCK
	goto FallarborTown_EventScript_TeachTutorMove
	end

FallarborTown_EventScript_BodySlam::
	setvar VAR_0x8005, MOVE_BODY_SLAM
	goto FallarborTown_EventScript_TeachTutorMove
	end

FallarborTown_EventScript_RockSlide::
	setvar VAR_0x8005, MOVE_ROCK_SLIDE
	goto FallarborTown_EventScript_TeachTutorMove
	end

FallarborTown_EventScript_DynamicPunch::
	setvar VAR_0x8005, MOVE_DYNAMIC_PUNCH
	goto FallarborTown_EventScript_TeachTutorMove
	end

FallarborTown_EventScript_AquaTail::
	setvar VAR_0x8005, MOVE_AQUA_TAIL
	goto FallarborTown_EventScript_TeachTutorMove
	end

FallarborTown_EventScript_Bounce::
	setvar VAR_0x8005, MOVE_BOUNCE
	goto FallarborTown_EventScript_TeachTutorMove
	end

FallarborTown_EventScript_IronHead::
	setvar VAR_0x8005, MOVE_IRON_HEAD
	goto FallarborTown_EventScript_TeachTutorMove
	end

FallarborTown_EventScript_DrillRun::
	setvar VAR_0x8005, MOVE_DRILL_RUN
	goto FallarborTown_EventScript_TeachTutorMove
	end

FallarborTown_EventScript_HyperVoice::
	setvar VAR_0x8005, MOVE_HYPER_VOICE
	goto FallarborTown_EventScript_TeachTutorMove
	end

FallarborTown_EventScript_Outrage::
	setvar VAR_0x8005, MOVE_OUTRAGE
	goto FallarborTown_EventScript_TeachTutorMove
	end

FallarborTown_EventScript_Superpower::
	setvar VAR_0x8005, MOVE_SUPERPOWER
	goto FallarborTown_EventScript_TeachTutorMove
	end

FallarborTown_EventScript_MistyExplosion::
	setvar VAR_0x8005, MOVE_MISTY_EXPLOSION
	goto FallarborTown_EventScript_TeachTutorMove
	end

FallarborTown_EventScript_SteelRoller::
	setvar VAR_0x8005, MOVE_STEEL_ROLLER
	goto FallarborTown_EventScript_TeachTutorMove
	end

FallarborTown_EventScript_MeteorBeam::
	setvar VAR_0x8005, MOVE_METEOR_BEAM
	goto FallarborTown_EventScript_TeachTutorMove
	end

FallarborTown_EventScript_Poltergeist::
	setvar VAR_0x8005, MOVE_POLTERGEIST
	goto FallarborTown_EventScript_TeachTutorMove
	end

FallarborTown_EventScript_LashOut::
	setvar VAR_0x8005, MOVE_LASH_OUT
	goto FallarborTown_EventScript_TeachTutorMove
	end

FallarborTown_EventScript_TeachTutorMove::
	msgbox FallarborTown_Text_TeachMoveToWhichMon, MSGBOX_DEFAULT
	fadescreen FADE_TO_BLACK
	special CloseBattleFrontierTutorWindow
	chooseboxmon SELECT_PC_MON_MOVE_TUTOR
	waitstate
	goto_if_eq VAR_RESULT, FALSE, FallarborTown_EventScript_CancelChooseMon
	release
	end

FallarborTown_EventScript_ExitTutorMoveSelect::
	special CloseBattleFrontierTutorWindow
	msgbox FallarborTown_Text_YouDontWantTo, MSGBOX_DEFAULT
	release
	end

FallarborTown_EventScript_CancelChooseMon::
	msgbox FallarborTown_Text_YouDontWantTo, MSGBOX_DEFAULT
	release
	end

FallarborTown_Text_TeachWhichMove:
	.string "What move would you like to learn?$"

FallarborTown_Text_TeachMoveToWhichMon:
	.string "Pick the POKéMON to teach the move to.$"

FallarborTown_Text_YouDontWantTo:
	.string "Come back any time!$"