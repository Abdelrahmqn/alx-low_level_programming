#include <main.h>
/**
 * main - Entry point
 * followed by n l If you rename the program, it will print the new name
 * @argv: master argv
 * @argc: master argc
 * Return: Always 0 (Success)
*/
int main(int argc[], char *argv[])
{
	printf("%s \n", argv[argc - 1]);
	return (0);
}
