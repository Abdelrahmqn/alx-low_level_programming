#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Read text file print to STDOUT.
 * @filename: text file being read
 * @letters: number of letters to be read
 * Return: w- actual number of bytes read and printed
 *        0 when function fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *fptr;
	ssize_t fd;
	ssize_t w;
	ssize_t t;

	fptr = open(filename, "r");
	if (fptr == NULL)
		return (0);
	fptr = malloc(sizeof(char) * letters);
	t = read(fd, fptr, letters);
	w = write(STDOUT_FILENO, fptr, t);

	free(fptr);
	close(fd);
	return (w);
}
