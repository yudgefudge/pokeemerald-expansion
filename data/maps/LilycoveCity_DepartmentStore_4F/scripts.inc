LilycoveCity_DepartmentStore_4F_MapScripts::
	.byte 0

LilycoveCity_DepartmentStore_4F_EventScript_Gentleman::
	msgbox LilycoveCity_DepartmentStore_4F_Text_AttackOrDefenseTM, MSGBOX_NPC
	end

LilycoveCity_DepartmentStore_4F_EventScript_Woman::
	msgbox LilycoveCity_DepartmentStore_4F_Text_FiftyDifferentTMs, MSGBOX_NPC
	end

LilycoveCity_DepartmentStore_4F_EventScript_Youngster::
	msgbox LilycoveCity_DepartmentStore_4F_Text_PokemonOnlyHaveFourMoves, MSGBOX_NPC
	end

LilycoveCity_DepartmentStore_4F_EventScript_ClerkLeft::
	lock
	faceplayer
	message gText_HowMayIServeYou
	waitmessage
	pokemart LilycoveCity_DepartmentStore_4F_Pokemart_AttackTMs
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end

	.align 2
LilycoveCity_DepartmentStore_4F_Pokemart_AttackTMs:
	.2byte ITEM_TM_BREAKING_SWIPE
	.2byte ITEM_TM_DRAGON_CLAW
	.2byte ITEM_TM_WATER_PULSE
	.2byte ITEM_TM_CALM_MIND
	.2byte ITEM_TM_ROAR
	.2byte ITEM_TM_TOXIC
	.2byte ITEM_TM_HAIL
	.2byte ITEM_TM_BULK_UP
	.2byte ITEM_TM_BULLET_SEED
	.2byte ITEM_TM_HIDDEN_POWER
	.2byte ITEM_TM_SUNNY_DAY
	.2byte ITEM_TM_TAUNT
	.2byte ITEM_TM_ICE_BEAM
	.2byte ITEM_TM_BLIZZARD
	.2byte ITEM_TM_HYPER_BEAM
	.2byte ITEM_TM_LIGHT_SCREEN
	.2byte ITEM_TM_PROTECT
	.2byte ITEM_TM_RAIN_DANCE
	.2byte ITEM_TM_GIGA_DRAIN
	.2byte ITEM_TM_SAFEGUARD
	.2byte ITEM_TM_FRUSTRATION
	.2byte ITEM_TM_SOLAR_BEAM
	.2byte ITEM_TM_IRON_TAIL
	.2byte ITEM_TM_THUNDERBOLT
	.2byte ITEM_TM_THUNDER
	.2byte ITEM_TM_EARTHQUAKE
	.2byte ITEM_TM_RETURN
	.2byte ITEM_TM_DIG
	.2byte ITEM_TM_PSYCHIC
	.2byte ITEM_TM_SHADOW_BALL
	.2byte ITEM_TM_BRICK_BREAK
	.2byte ITEM_TM_DOUBLE_TEAM
	.2byte ITEM_TM_REFLECT
	.2byte ITEM_TM_LIQUIDATION
	.2byte ITEM_TM_FLAMETHROWER
	.2byte ITEM_TM_SLUDGE_BOMB
	.2byte ITEM_TM_SANDSTORM
	.2byte ITEM_TM_FIRE_BLAST
	.2byte ITEM_TM_ROCK_TOMB
	.2byte ITEM_TM_STOMPING_TANTRUM
	.2byte ITEM_TM_SMART_STRIKE
	.2byte ITEM_TM_FACADE
	.2byte ITEM_TM_SECRET_POWER
	.2byte ITEM_TM_REST
	.2byte ITEM_TM_ATTRACT
	.2byte ITEM_TM_THIEF
	.2byte ITEM_TM_STEEL_WING
	.2byte ITEM_TM_SKILL_SWAP
	.2byte ITEM_TM_KNOCK_OFF
	.2byte ITEM_TM_OVERHEAT
	pokemartlistend

LilycoveCity_DepartmentStore_4F_EventScript_ClerkRight::
	lock
	faceplayer
	message gText_HowMayIServeYou
	waitmessage
	pokemart LilycoveCity_DepartmentStore_4F_Pokemart_DefenseTMs
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end

	.align 2
LilycoveCity_DepartmentStore_4F_Pokemart_DefenseTMs:
.2byte ITEM_TM_DRAGON_DANCE
	.2byte ITEM_TM_STONE_EDGE
	.2byte ITEM_TM_AURA_SPHERE
	.2byte ITEM_TM_STEALTH_ROCK
	.2byte ITEM_TM_SCALD
	.2byte ITEM_TM_FOUL_PLAY
	.2byte ITEM_TM_VOLT_SWITCH
	.2byte ITEM_TM_TOXIC_SPIKES
	.2byte ITEM_TM_U_TURN
	.2byte ITEM_TM_THUNDER_WAVE
	.2byte ITEM_TM_NASTY_PLOT
	.2byte ITEM_TM_SUBSTITUTE
	.2byte ITEM_TM_GYRO_BALL
	.2byte ITEM_TM_SHADOW_CLAW
	.2byte ITEM_TM_DRAIN_PUNCH
	.2byte ITEM_TM_LOW_KICK
	.2byte ITEM_TM_ENERGY_BALL
	.2byte ITEM_TM_EARTH_POWER
	.2byte ITEM_TM_AVALANCHE
	.2byte ITEM_TM_FLASH_CANNON
	.2byte ITEM_TM_FOCUS_BLAST
	.2byte ITEM_TM_TRICK_ROOM
	.2byte ITEM_TM_DARK_PULSE
	.2byte ITEM_TM_POISON_JAB
	.2byte ITEM_TM_SEED_BOMB
	.2byte ITEM_TM_DRAGON_PULSE
	.2byte ITEM_TM_POWER_GEM
	.2byte ITEM_TM_WEATHER_BALL
	.2byte ITEM_TM_GUNK_SHOT
	.2byte ITEM_TM_SWORDS_DANCE
	.2byte ITEM_TM_ACROBATICS
	.2byte ITEM_TM_HEX
	.2byte ITEM_TM_SPIKES
	.2byte ITEM_TM_BATON_PASS
	.2byte ITEM_TM_SLEEP_TALK
	.2byte ITEM_TM_RETALIATE
	.2byte ITEM_TM_STORED_POWER
	.2byte ITEM_TM_BULLDOZE
	.2byte ITEM_TM_WORK_UP
	.2byte ITEM_TM_PHANTOM_FORCE
	.2byte ITEM_TM_BODY_PRESS
	.2byte ITEM_TM_GRASSY_TERRAIN
	.2byte ITEM_TM_MISTY_TERRAIN
	.2byte ITEM_TM_ELECTRIC_TERRAIN
	.2byte ITEM_TM_PSYCHIC_TERRAIN
	.2byte ITEM_TM_ROOST
	.2byte ITEM_TM_DAZZLING_GLEAM
	.2byte ITEM_TM_FALSE_SWIPE
	.2byte ITEM_TM_WILL_O_WISP
	.2byte ITEM_TM_HIGH_HORSEPOWER
	pokemartlistend

LilycoveCity_DepartmentStore_4F_Text_AttackOrDefenseTM:
	.string "Hmm…\p"
	.string "An attacking move…\n"
	.string "Or a defensive move…\p"
	.string "It's no easy matter to decide which TM\n"
	.string "moves should be taught to POKéMON…$"

LilycoveCity_DepartmentStore_4F_Text_FiftyDifferentTMs:
	.string "There are so many different kinds of\n"
	.string "TM moves.\p"
	.string "A catalog I read said there are fifty\n"
	.string "different kinds.$"

LilycoveCity_DepartmentStore_4F_Text_PokemonOnlyHaveFourMoves:
	.string "I'd like to get all the different TMs,\n"
	.string "but a POKéMON learns only four moves.$"

