#include "main.h"
/**
 * append_text_to_file - function that appends text at teh end of a file.
 *
 * @filename: the file name.
 *
 * @text_content: the text that would append to the specifiec file.
 *
 * Return: 1 on success, -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file;
	ssize_t write_bytes;
	size_t len;

	if (filename == NULL)
	{
		return (-1);
	}
	file = open(filename, O_WRONLY | O_APPEND);
	if (file == -1)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		len = strlen(text_content);
		write_bytes = write(file, text_content, len);
		if (write_bytes != (ssize_t)len)
		{
		close(file);
			return (-1);
		}
	}
	close(file);
	return (1);
}
