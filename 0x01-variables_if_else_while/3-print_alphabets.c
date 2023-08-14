#include <stdio.h>
/**
 * main - Entry point
 *
 * description: write the alphabet in lower case then upper case
 *
 * Return: Always 0 (success)
*/
int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
{
	putchar(ch);
		ch++;
}
	putchar('\n');
{
	char ch = 'A';

	while (ch <= 'Z')
{
		putchar(ch);
		ch++;
}
	putchar('\n');
}

	return (0);
}
