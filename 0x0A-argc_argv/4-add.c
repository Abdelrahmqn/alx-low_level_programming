
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
int sum = 0, n1, n2;

if (argc != 3)
{
printf("Error\n");
return (1);
}
n1 = atoi(argv[1]);
n2 = atoi(argv[2]);
sum = n1 + n2;
printf("the sum is:%d\n", sum);
return (0);
}
