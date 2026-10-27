#include <stdlib.h>

#ifdef ZELKOVA_CLI_ALIASES

const char *cli_aliases[] = {
	ZELKOVA_CLI_ALIASES,
	NULL
};

#else

const char *cli_aliases[] = {
	"v=verbose",
	"q=quiet",
	"h=help",
	NULL
};

#endif
