#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 * 
 * Description: what about this true or false?
 *
 * Return: 0 (success)
*/
/* betty style doc for function main goes there */
int main(void)
{
	int n, digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	digit = n % 9;
	if (digit > 5)
	{
		printf("Last digit of %i is %i and is greater than 5\n", n, digit);
	}
	else if (n == 0)
	{
		printf("Last digit of %i is %i and is 0\n", n, digit);
	}
	else
	{
		printf("%d less than 6 and not 0\n", n);
	}
	return (0);
}
