#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - This Reads a text file and prints it to POSIX stdout.
 * @filename: it's a pointer to the name of the file.
 * @letters: It's the number of letters the
 *           function should read and print.
 *
 * Return: If the function fails or filename is NULL - 0.
 *         O/w - the actual number of bytes the function can read and print.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t o, r, w;
	char *b;

	if (filename == NULL)
		return (0);

	b = malloc(sizeof(char) * letters);
	if (b == NULL)
		return (0);

	o = open(filename, O_RDONLY);
	r = read(o, b, letters);
	w = write(STDOUT_FILENO, b, r);

	if (o == -1 || r == -1 || w == -1 || w != r)
	{
		free(b);
		return (0);
	}

	free(b);
	close(o);

	return (w);
}
