#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: write the letters 1 to 9 <base 10>
 *
 * Return: Always 0 (success)
*/
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		printf("%d", i);
	}
	putchar('\n');
	return (0);
}
