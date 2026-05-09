VerdanturfTown_PokemonCenter_1F_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, VerdanturfTown_PokemonCenter_1F_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
	.byte 0

VerdanturfTown_PokemonCenter_1F_OnTransition:
	setrespawn HEAL_LOCATION_VERDANTURF_TOWN
	call Common_EventScript_UpdateBrineyLocation
	end

VerdanturfTown_PokemonCenter_1F_EventScript_Nurse::
	setvar VAR_0x800B, LOCALID_VERDANTURF_NURSE
	call Common_EventScript_PkmnCenterNurse
	waitmessage
	waitbuttonpress
	release
	end

VerdanturfTown_PokemonCenter_1F_EventScript_Gentleman::
	msgbox VerdanturfTown_PokemonCenter_1F_Text_FaithInYourPokemon, MSGBOX_NPC
	end

VerdanturfTown_PokemonCenter_1F_EventScript_ExpertM::
	msgbox VerdanturfTown_PokemonCenter_1F_Text_VisitForBattleTent, MSGBOX_NPC
	end

VerdanturfTown_PokemonCenter_1F_Text_FaithInYourPokemon:
	.string "You can't consider yourself a real\n"
	.string "TRAINER if you don't have faith\l"
	.string "in your POKéMON.\p"
	.string "Only those people who can believe\n"
	.string "in their battling POKéMON can win\l"
	.string "through to the very end.$"

VerdanturfTown_PokemonCenter_1F_Text_VisitForBattleTent:
	.string "The reason why anyone would visit\n"
	.string "VERDANTURF…\p"
	.string "It's the BATTLE TENT. It goes without\n"
	.string "saying.\p"
	.string "Or is there somebody here that you\n"
	.string "came to see?$"

VerdanturfTown_EventScript_MoveTutor::
	lock
	faceplayer
	goto_if_set FLAG_MET_VERDANTURF_MOVE_TUTOR, VerdanturfTown_EventScript_ChooseTutorMove
	setflag FLAG_MET_VERDANTURF_MOVE_TUTOR
	goto VerdanturfTown_EventScript_ChooseTutorMove
	end

VerdanturfTown_EventScript_ChooseTutorMove::
	message VerdanturfTown_Text_TeachWhichMove
	waitmessage
	setvar VAR_0x8004, SCROLL_MULTI_VERDANTURF_MOVE_TUTOR
	setvar VAR_0x8006, 0
	special ShowScrollableMultichoice
	waitstate
	switch VAR_RESULT
	case 0, VerdanturfTown_EventScript_ThunderPunch
	case 1, VerdanturfTown_EventScript_IcePunch
	case 2, VerdanturfTown_EventScript_FirePunch
	case 3, VerdanturfTown_EventScript_FireFang
	case 4, VerdanturfTown_EventScript_IceFang
	case 5, VerdanturfTown_EventScript_ThunderFang
	case 6, VerdanturfTown_EventScript_PsychicFangs
	case 7, VerdanturfTown_EventScript_RisingVoltage
	case 8, VerdanturfTown_EventScript_ScorchingSands
	case 9, VerdanturfTown_EventScript_DualWingbeat
	case 10, VerdanturfTown_EventScript_ScaleShot
	case 11, VerdanturfTown_EventScript_BurningJealousy
	case 12, VerdanturfTown_EventScript_ExpandingForce
	case 13, VerdanturfTown_EventScript_Boomburst
	case 14, VerdanturfTown_EventScript_Hurricane
	case 15, VerdanturfTown_EventScript_ExitTutorMoveSelect
	case MULTI_B_PRESSED, VerdanturfTown_EventScript_ExitTutorMoveSelect
	end

VerdanturfTown_EventScript_ChooseNewTutorMove::
	message VerdanturfTown_Text_TeachWhichMove
	waitmessage
	setvar VAR_0x8004, SCROLL_MULTI_VERDANTURF_MOVE_TUTOR
	setvar VAR_0x8006, 1
	special ShowScrollableMultichoice
	waitstate
	switch VAR_RESULT
	case 0, VerdanturfTown_EventScript_ThunderPunch
	case 1, VerdanturfTown_EventScript_IcePunch
	case 2, VerdanturfTown_EventScript_FirePunch
	case 3, VerdanturfTown_EventScript_FireFang
	case 4, VerdanturfTown_EventScript_IceFang
	case 5, VerdanturfTown_EventScript_ThunderFang
	case 6, VerdanturfTown_EventScript_PsychicFangs
	case 7, VerdanturfTown_EventScript_RisingVoltage
	case 8, VerdanturfTown_EventScript_ScorchingSands
	case 9, VerdanturfTown_EventScript_DualWingbeat
	case 10, VerdanturfTown_EventScript_ScaleShot
	case 11, VerdanturfTown_EventScript_BurningJealousy
	case 12, VerdanturfTown_EventScript_ExpandingForce
	case 13, VerdanturfTown_EventScript_Boomburst
	case 14, VerdanturfTown_EventScript_Hurricane
	case 15, VerdanturfTown_EventScript_ExitTutorMoveSelect
	case MULTI_B_PRESSED, VerdanturfTown_EventScript_ExitTutorMoveSelect
	end

VerdanturfTown_EventScript_ThunderPunch::
	setvar VAR_0x8005, MOVE_THUNDER_PUNCH
	goto VerdanturfTown_EventScript_TeachTutorMove
	end

VerdanturfTown_EventScript_IcePunch::
	setvar VAR_0x8005, MOVE_ICE_PUNCH
	goto VerdanturfTown_EventScript_TeachTutorMove
	end

VerdanturfTown_EventScript_FirePunch::
	setvar VAR_0x8005, MOVE_FIRE_PUNCH
	goto VerdanturfTown_EventScript_TeachTutorMove
	end

VerdanturfTown_EventScript_FireFang::
	setvar VAR_0x8005, MOVE_FIRE_FANG
	goto VerdanturfTown_EventScript_TeachTutorMove
	end

VerdanturfTown_EventScript_IceFang::
	setvar VAR_0x8005, MOVE_ICE_FANG
	goto VerdanturfTown_EventScript_TeachTutorMove
	end

VerdanturfTown_EventScript_ThunderFang::
	setvar VAR_0x8005, MOVE_THUNDER_FANG
	goto VerdanturfTown_EventScript_TeachTutorMove
	end

VerdanturfTown_EventScript_PsychicFangs::
	setvar VAR_0x8005, MOVE_PSYCHIC_FANGS
	goto VerdanturfTown_EventScript_TeachTutorMove
	end

VerdanturfTown_EventScript_RisingVoltage::
	setvar VAR_0x8005, MOVE_RISING_VOLTAGE
	goto VerdanturfTown_EventScript_TeachTutorMove
	end

VerdanturfTown_EventScript_ScorchingSands::
	setvar VAR_0x8005, MOVE_SCORCHING_SANDS
	goto VerdanturfTown_EventScript_TeachTutorMove
	end

VerdanturfTown_EventScript_DualWingbeat::
	setvar VAR_0x8005, MOVE_DUAL_WINGBEAT
	goto VerdanturfTown_EventScript_TeachTutorMove
	end

VerdanturfTown_EventScript_ScaleShot::
	setvar VAR_0x8005, MOVE_SCALE_SHOT
	goto VerdanturfTown_EventScript_TeachTutorMove
	end

VerdanturfTown_EventScript_BurningJealousy::
	setvar VAR_0x8005, MOVE_BURNING_JEALOUSY
	goto VerdanturfTown_EventScript_TeachTutorMove
	end

VerdanturfTown_EventScript_ExpandingForce::
	setvar VAR_0x8005, MOVE_EXPANDING_FORCE
	goto VerdanturfTown_EventScript_TeachTutorMove
	end

VerdanturfTown_EventScript_Boomburst::
	setvar VAR_0x8005, MOVE_BOOMBURST
	goto VerdanturfTown_EventScript_TeachTutorMove
	end

VerdanturfTown_EventScript_Hurricane::
	setvar VAR_0x8005, MOVE_HURRICANE
	goto VerdanturfTown_EventScript_TeachTutorMove
	end

VerdanturfTown_EventScript_TeachTutorMove::
	msgbox VerdanturfTown_Text_TeachMoveToWhichMon, MSGBOX_DEFAULT
	fadescreen FADE_TO_BLACK
	special CloseBattleFrontierTutorWindow
	chooseboxmon SELECT_PC_MON_MOVE_TUTOR
	waitstate
	goto_if_eq VAR_RESULT, FALSE, VerdanturfTown_EventScript_CancelChooseMon
	release
	end

VerdanturfTown_EventScript_ExitTutorMoveSelect::
	special CloseBattleFrontierTutorWindow
	msgbox VerdanturfTown_Text_YouDontWantTo, MSGBOX_DEFAULT
	release
	end

VerdanturfTown_EventScript_CancelChooseMon::
	msgbox VerdanturfTown_Text_YouDontWantTo, MSGBOX_DEFAULT
	release
	end

VerdanturfTown_Text_TeachWhichMove:
	.string "What move would you like to learn?$"

VerdanturfTown_Text_TeachMoveToWhichMon:
	.string "Pick the POKéMON to teach the move to.$"

VerdanturfTown_Text_YouDontWantTo:
	.string "Come back any time!$"
	