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
int i;
for (i = 0; i < argc; i++)
{
printf("%s \n", argv[i]);
}
return (0);
}
