#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <elf.h>
#include <string.h>
#include <errno.h>

void print_error(const char *msg)
{
	fprintf(stderr, "%s\n", msg);
	exit(98);
}

