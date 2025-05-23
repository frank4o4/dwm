//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{"", "dwmweather", 14400, 0},
	{"", "dwmmemory", 5, 0},
	{"", "dwmcpu", 5, 0},
	{"", "dwmclock", 10, 0},
};

//sets delimiter between status commands. NULL character ('\0') means no delimiter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
