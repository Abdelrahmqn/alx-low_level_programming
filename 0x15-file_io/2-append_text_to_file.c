#include "main.h"
/**
 *append_text_to_file - a function that creates a file
 *@filename: A pointer that has the name of the file.
 *@text_content: That string that we will be able to add inside him
 * Return: If the function fails or filename is NULL - -1.
 *If the file does not exist the user lacks write permissions - -1.
 *Otherwise - 1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
if (filename == NULL)
{
return (-1);
}
	int fd, w, len = 0;

	fd = open(filename, O_WRONLY | O_APPEND);

		if (text_content != NULL)
		{
			for (len = 0; text_content[len];)
			len++;
		}
	w = write(fd, text_content, len);

	if (fd == -1 || w == -1)
	return (-1);

	close(fd);
	return (1);
}
