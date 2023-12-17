#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <elf.h>
#include <string.h>
#include <errno.h>

int main(void)
{
	char *msg = "error";

	fprintf(stderr, "%s\n", msg);
	exit(98);
	return (0);
}

