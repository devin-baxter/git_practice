#include "dbg.h"
#include <stdlib.h>
#include <stdio.h>

void		test_debug()
{
	// Notice that you don't need the newline
	debug("I have brown hair.");

	// Passing in arguments like printf
	debug("I am %d years old.", 31);
}

void		test_log_err()
{
	log_err("I believe everything is broken.");
	log_err("There are %d problems in %s.", 0, "space");
}
