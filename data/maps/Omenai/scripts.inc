Omenai_MapScripts::
# 2 "data/maps/Omenai/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Omenai_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Omenai_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 3 "data/maps/Omenai/scripts.pory"
	map_script_2 VAR_TEMP_0, 0, InitScript
	.2byte 0


InitScript::
# 8 "data/maps/Omenai/scripts.pory"
	lockall
# 9 "data/maps/Omenai/scripts.pory"
	msgbox InitText
# 10 "data/maps/Omenai/scripts.pory"
	closemessage
# 11 "data/maps/Omenai/scripts.pory"
	setflag FLAG_SYS_B_DASH
# 12 "data/maps/Omenai/scripts.pory"
	setflag FLAG_RECEIVED_RUNNING_SHOES
# 13 "data/maps/Omenai/scripts.pory"
	setvar VAR_TEMP_0, 1
# 14 "data/maps/Omenai/scripts.pory"
	releaseall
	return


InitText::
# 17 "data/maps/Omenai/scripts.pory"
	.string "Welcome to Omenai!\n"
	.string "Explore the area and find hidden secrets!$"
