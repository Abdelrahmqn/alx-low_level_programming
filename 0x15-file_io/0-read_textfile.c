#include "main.h"
#include <unistd.h>
#include <stdlib.h>
/**
 * read_textfile - function that reads atest file and prints it to teh posix.
 *
 * @filename: the file name.
 *
 * @letters: the file context.
 *
 * Return: the actual number of letters it could read and print,else 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{

	char *buf;
	FILE *file;
	size_t bytes_written, bytes_read;

	if (filename == NULL)
	{
		return (0);
	}
	file = fopen(filename, "r");
	if (file == NULL)
	{
		return (0);
	}
	buf = malloc(letters + 1);
	if (buf == NULL)
	{
		fclose(file);
		return (0);
	}
	bytes_read = fread(buf, sizeof(char), letters, file);
	if (bytes_read == 0)
	{
		fclose(file);
		free(buf);
		return (0);
	}
	bytes_written = write(STDOUT_FILENO, buf, bytes_read);
	if (bytes_written != bytes_read)
	{
		fclose(file);
		free(buf);
	}
	fclose(file);
	free(buf);
	return (bytes_read);
}
