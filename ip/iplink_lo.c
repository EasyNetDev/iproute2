/* SPDX-License-Identifier: GPL-2.0 */
#include <stdio.h>
#include <stdlib.h>

#include "utils.h"
#include "ip_common.h"

static void lo_print_help(struct link_util *lu,
			    int argc, char **argv, FILE *f)
{
	fprintf(f, "Usage: ... lo\n");
}

struct link_util lo_link_util = {
	.id		= "lo",
	.print_help	= lo_print_help,
};
