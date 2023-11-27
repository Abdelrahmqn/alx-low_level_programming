#include "main.h"
/**
 * cp_from_another - function that copies contxt from file to another.
 *
 * @file_from: the file that we will copy the content from.
 *
 * @text_file: the text that will copied.
 *
 * Return: 1 on success, -1 on failure.
 */
int cp_from_another(const char *file_content, char *text_file)
{
	int f_from, f_to;
	char buffer[BUF_SIZE];
	ssize_t bytes_write, bytes_read;

	if (file_content == NULL || text_file == NULL)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	f_from = open(file_content, O_WRONLY);
	if (f_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file NAME_OF_THE_FILE\n");
		exit(98);
	}
	f_to = open(text_file, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
	if (f_to == -1)
	{
		close(f_from);
		dprintf(STDERR_FILENO, "Error: Can't write to NAME_OF_THE_FILE\n");
		exit(99);
	}
	while ((bytes_read = read(f_from, buffer, BUF_SIZE)) > 0)
	{
		bytes_write = write(f_to, buffer, bytes_read);
		if (bytes_write == -1 || bytes_write != bytes_read)
		{
			close(f_from);
			close(f_to);
		dprintf(STDERR_FILENO, "Error: Can't write to NAME_OF_THE_FILE\n");
		exit(99);
		}
		if (bytes_read == -1)
		{
		close(f_from);
		close(f_to);
		dprintf(STDERR_FILENO, "Error: Can't read from file NAME_OF_THE_FILE\n");
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
