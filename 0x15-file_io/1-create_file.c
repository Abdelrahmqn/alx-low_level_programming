#include "main.h"
/**
 * create_file - function that creates a file rw- ---.
 *
 * @filename: the file name.
 *
 * @text_content: the content of the file.
 *
 * Return: 1 on succcess, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int write_bytes, file;

	if (filename == NULL)
	{
		return (-1);
	}
	file = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (file == -1)
	{
		close(file);
		return (-1);
	}
	if (text_content != NULL)
	{
		write_bytes = write(file, text_content, strlen(text_content));
		if (write_bytes == -1)
		{
			close(file);
			return (-1);
		}
	}
		close(file);
		return (1);
}
