#include "main.h"
#include <stdio>

/**
 * read_textfile - This reads a text file and prints it to the POSIX stdout
 * @filename: This is thr name of the file to be read
 * @letters: This states the amount of letters it should read and print
 *
 * Return: This returns the actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int db;
	ssize_t lend, lenb;
	char *buffer;

	if (filename == NULL)
		return (0);
	db = open(filename, O_RDONLY);
	if (db == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		close(db);
		return (0);
	}
	lend = read(db, buffer, letters);
	close(db);
	if (lend == -1)
	{
		free(buffer);
		return (0);
	}
	lenb = write(STDOUT_FILENO, buffer, lend);
	free(buffer);
	if (lenr != lenb)
		return (0);
	return (lenb);
}
