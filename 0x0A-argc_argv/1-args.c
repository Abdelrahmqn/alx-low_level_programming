#include <stdio.h>
/**
 *main - Entry point
 *@argc: number of arguments
 *@argv: array of arguments
 *Return: Always 0 (Success)
 */
int main(int argc, char const *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}
