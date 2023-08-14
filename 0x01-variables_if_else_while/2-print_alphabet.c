#include <stdio.h>
/**
* main - Entry point
*
* Description: form the character a to z
*
* Return: Always 0 (Success)
*/
int main(void)
{
	char ch = 'a';
	while (ch <= 'z');
	{
	putchar(ch);
	ch++;
	}
	return (0);
}
