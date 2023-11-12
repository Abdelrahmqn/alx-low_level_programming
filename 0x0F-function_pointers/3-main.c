#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
* main - performs simple operations
* @argc: number of arguments
* @argv: array of arguments
*
* Return: 0 if successful, else error
*/
int main(int argc, char *argv[])
{
	int num1, num2, res;


	int (*operator)(int, int);

if (argc != 4)
{
	printf("Error\n");
	exit(98);
}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	operator = get_op_func(argv[2]);

	if (operator == NULL)
	{
		printf("Error\n");
		exit (99);
	}
	res = operator(num1, num2);
	printf("%d\n", res);
	return (0);
}
