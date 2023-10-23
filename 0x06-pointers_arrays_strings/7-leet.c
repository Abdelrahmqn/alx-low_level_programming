#include "main.h"
/**
 * leet - a,4 b,3 o,3 t,7 l,1
 * @inp: input characters equal in order
 * Return: digits
 */
char *leet(char *inp)
{
int i;

	for (i = 0; inp[i] != '\0'; i++)
	{
		if (inp[i] == 'a' || inp[i] == 'A')
			inp[i] = '4';
		else if (inp[i] == 'e' || inp[i] == 'E')
			inp[i] = '3';
		else if (inp[i] == 'o' || inp[i] == 'O')
			inp[i] = '0';
		else if (inp[i] == 't' || inp[i] == 'T')
			inp[i] = '7';
		else if (inp[i] == 'l' || inp[i] == 'L')
			inp[i] = '1';
	}
	return (inp);
}
