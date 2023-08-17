#include <main.h>
/**
 * main -Entry point
 *
 * @c: input for alphabet
 *
 * Description: check for a digit (0 through 9).
 *
 * Return: return 1 if c digit or return 0 if not
*/
int _isdigit(int c);
{
	if (c >= 0 && c <= 9)
		return (1);
	return (0);
}
