set_global_assignment -entity "dj" -library "lib_dj" -name IP_TOOL_NAME "Qsys"
set_global_assignment -entity "dj" -library "lib_dj" -name IP_TOOL_VERSION "23.1"
set_global_assignment -entity "dj" -library "lib_dj" -name IP_TOOL_ENV "Qsys"
set_global_assignment -library "lib_dj" -name SPD_FILE [file join $::quartus(sip_path) "../dj.spd"]
set_global_assignment -library "lib_dj" -name MISC_FILE [file join $::quartus(sip_path) "../../dj.qsys"]

set_global_assignment -library "lib_dj" -name MISC_FILE [file join $::quartus(sip_path) "dj.v"]
