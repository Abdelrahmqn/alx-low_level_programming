
#include <ctype.h>
#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints all arguments it receives
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc __attribute__((unused)), char *argv[])
{
int sum = 0, n, i, j;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
			if (!isdigit(argv[i][j]))
	{
			printf("Error\n");
			return (1);
	}
		n = atoi(argv[i]);
		sum += n;
	}
		printf("%d\n", sum);
		return (0);
}
