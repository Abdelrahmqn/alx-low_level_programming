#include <stdio.h>

/**
 * main - Entry point of the program.
 *
 * Description: This function is the entry point of the program
 * print the name of the file it was compiled from.
 *
 * Return: always on success return (0)
 */
int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
