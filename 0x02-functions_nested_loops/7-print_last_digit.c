#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 * @num: the int to extract the last digit from
 * Return: value of the last digit
 */

int print_last_digit(int num)
{
int last_digit;

	last_digit = num % 10;

	_putchar(last_digit);
	return (last_digit);
}
