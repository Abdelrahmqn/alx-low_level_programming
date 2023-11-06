#include <stdio.h>

/**
 * main - entry point of the program.
 *
 * Description: name of the file it was compiled from, followed by a new line,
 * also the function is the entry point of the program.
 *
 * return: always on success return (0)
 */
int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
