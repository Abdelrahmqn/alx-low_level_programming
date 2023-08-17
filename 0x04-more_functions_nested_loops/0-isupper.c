#include <main.h>
/**
 * _isupper - check if c is upper
 *
 * @c: input for alphabet
 *
 * Return: retrun 1 if its uppercase ,if not retrun 0
*/
	int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
		return (0);
}
