#include <stdio.h>
/**
 * main - Entry point
 *
 * discrpition: print all alphapet latters
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	char ch = 'z';

	while (ch >= 'a')
{
		putchar(ch);
		ch++;
}
	putchar('\n');

	return (0);
}
