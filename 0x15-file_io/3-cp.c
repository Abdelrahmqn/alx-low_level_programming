#include "main.h"
/**
 * main - function that copies contxt from file to another.
 *
 * @argc: arguments.
 * @argv: argumntsv.
 *
 * Return: 1 on success, -1 on failure.
 */
int main(int argc, char *argv[])
{
	const char *file_from;
	const char *file_to;
	int f_from, f_to;
	char buffer[1024];
	ssize_t bytes_write, bytes_read;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
			exit(97);
	}
	file_from = argv[1];
	file_to = argv[2];
	f_from = open(file_from, O_RDONLY);
	if (f_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file NAME_OF_THE_FILE %s\n", file_from);
		exit(98);
	}
	f_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
	if (f_to == -1)
	{
		close(f_from);
		dprintf(STDERR_FILENO, "Error: Can't write to NAME_OF_THE_FILE %s\n", file_to);
		exit(99);
	}
	while ((bytes_read = read(f_from, buffer, BUF_SIZE)) > 0)
	{
		bytes_write = write(f_to, buffer, bytes_read);
		if (bytes_write == -1 || bytes_write != bytes_read)
		{
			close(f_from);
			close(f_to);
		dprintf(STDERR_FILENO, "Error: Can't write to NAME_OF_THE_FILE %s\n", file_to);
		exit(99);
		}
		if (bytes_read == -1)
		{
		close(f_from);
		close(f_to);
		dprintf(STDERR_FILENO, "Error: Can't read from file NAME_OF_THE_FILE %s\n", file_to);
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
