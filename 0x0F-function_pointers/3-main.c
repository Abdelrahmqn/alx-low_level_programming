#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 * main - Entry point
 * 
 * Description: Write a program that performs simple operations.
 *
 * return: 
 */

int main(argc, char *argv[])
{
	int num1, num2, res;

if (argc != 4)
{
	printf("Error\n");
	exit(98);
}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	char *operator = argv[2];
int (*func)(int, int) = get_op_func(operator);
	if (*func == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	res = operator(num1, num2);
	printf("%d\n", res;
	return (0);
}
