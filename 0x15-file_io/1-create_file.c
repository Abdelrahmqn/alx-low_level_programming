#include "main.h"
/**
 * create_file - Creates a file.
 * @filename: A pointer to the name of the file to create.
 * @text_content: A pointer to a string to write to the file.
 *
 * Return: If the function fails - -1.
 *         Otherwise - 1.
 */
int create_file(const char *filename, char *text_content)
{
	if (filename == NULL)
	{
	return (-1);
	}
	int fd;

	fd = open(filename, O_CREAT | O_RDWR, 0600);

	if (fd == -1)
	{
	printf("error");
	return (-1);
	}
	if (text_content != NULL)
	{
	ssize_t bytes_written = write(fd, text_content, strlen(text_content));

	if (bytes_written == -1)
	{
	close(fd);
	return (-1);
	}
	close(fd);
	return (1);
}
