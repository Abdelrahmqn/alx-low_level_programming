#include "main.h"
#include <limits.h>
#include <stdio.h>
/**
 * main - tests my function.
 *
 * return: 0 on succss
 */
int main(void)
{
	int len1, len2;

	len1 = _printf("number : %d ,, char : %c ,, string: %s\n", 1111, 'k', "hi");
	len2 = _printf("number : %d ,, char : %c ,, string: %s\n", 1111, 'k', "hi");
	_printf("%d %d\n", len1, len2);
	return (0);
}
