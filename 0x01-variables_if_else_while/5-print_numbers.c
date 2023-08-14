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
char ch = '48';

	while (ch <= '57')

{
		putchar(ch);
		ch++;
}
	putchar('\n');
	return (0);
}
