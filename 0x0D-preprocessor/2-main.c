#include <stdio.h>

/**
 * main - Entry point of the program.
 *
 * Description: This function is the entry point of the program
 * print the name of the file it was compiled from.
 *
 * Return: Always 0 (success)
 */
int main(void)
{
printf("%s\n", __FILE__);
return (0);
}
