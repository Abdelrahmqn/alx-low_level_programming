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
	int i;

	for (i = 49; i <= 57; i++)
{
		putchar(i);
}
{
	char ch = 'a';

	while (ch <= 'f')
{
		putchar(ch);
		ch++;
}
	putchar('\n');

}
	return (0);
}
