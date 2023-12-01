#include "main.h"
/**
 * main - function that complete a function.
 * @argc: arguments.
 * @argv: argumntsv.
 * Return: 1 on success, -1 on failure.
 */
int main(int argc, char *argv[])
{
	const char *ar1, *ar2;

if (argc != 3)
	{
	dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
	exit(97);
	}

	ar1 = argv[1];
	ar2 = argv[2];

	copy_from_file(ar1, ar2);
	return (0);
}
/**
 * copy_from_file - function that copy the content from file to another.
 * @ar1: the argument 1.
 * @ar2: the argument 2.
 * Return: try to return 0 on success, -1 on failure.
*/
int copy_from_file(const char *ar1, const char *ar2)
{
	int f_from, f_to;
	char buffer[1024];
	ssize_t bytes_write, bytes_read;

	f_from = open(ar1, O_RDONLY);
if (f_from == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file NAME_OF_THE_FILE %s", ar1);
exit(98);
}
	f_to = open(ar2, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	while (f_to == -1 || (bytes_read = read(f_from, buffer, 1024)) > 0)
	{
	bytes_write = write(f_to, buffer, bytes_read);
	if (bytes_write == -1 || bytes_read == -1)
	{
		close(f_from);
		close(f_to);
		dprintf(STDERR_FILENO, "Error: Can't write to NAME_OF_THE_FILE %s\n", ar2);
		exit(99);
	}
	if (bytes_read == -1)
	{
	close(f_from);
	close(f_to);
dprintf(STDERR_FILENO, "Error: Can't read from file NAME_OF_THE_FILE %s", ar2);
	exit(98);
	}
	if (close(f_from) == -1 || close(f_to) == -1)
	{
	dprintf(STDERR_FILENO, "Error: Can't close fd FD_VALUE\n");
	exit(100);
	}
	}
	return (0);
}
