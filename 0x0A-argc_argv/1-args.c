#include <stdio.h>
/**
 *main - Entry point
 *@argc: number of arguments
 *@argv: array of arguments
 *Return: Always 0 (Success)
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	int i;

for (i = 0; i < argc; i++)
{
printf("%s\n", argv[i]);
}
return (0);
}
