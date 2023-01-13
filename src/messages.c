/*
 *	messages.c
 *	cotributors:
 *		- Gustavo Pantuza
 *		- Mistkeith (Mistkeithy)
 */

#include <stdio.h>
#include <stdlib.h>
#include "messages.h"

/*
 * Help message
 */
void
help ()
{
    fprintf(stdout, __PROGRAM_NAME__ "\n\n");
    usage();
    description();
    options();
    author();
    version();
}



/*
 * Usage message
 */
void
usage ()
{
    fprintf(stdout, "Usage: ");
    fprintf(stdout, "%s [options] input file\n\n", __PROGRAM_NAME__);
}



/*
 * Description message
 */
void
description ()
{
    fprintf(stdout, "Description: ");
    fprintf(stdout, "Write here what you want to be your project description."
            "Observe that you can break a string inside a fprintf\n");
}



/*
 * Options message
 */
void
options ()
{
    fprintf(stdout, "Options:\n\n");
    fprintf(stdout, "\t-v|--version\n"
                    "\t\tPrints %s version\n\n", __PROGRAM_NAME__);
    fprintf(stdout, "\t-h|--help\n"
                    "\t\tPrints this help message\n\n");
    fprintf(stdout, "\t--no-color\n"
                    "\t\tDoes not use colors for printing\n\n");

}



/*
 * Author message
 */
void
author ()
{
    fprintf(stdout, "Written by: %s\n\n",
            __PROGRAM_AUTHOR__);
}



/*
 * Version message
 */
void
version ()
{
    fprintf(stdout, __PROGRAM_NAME__ " version: %s\n",
            __PROGRAM_VERSION__);
}
