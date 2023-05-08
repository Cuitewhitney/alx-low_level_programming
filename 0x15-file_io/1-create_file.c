#include <stdio.h>
#include "main.h"

/**
 * create_file - This Creates a file.
 * @filename: This is a pointer to the name of the file to create.
 * @text_content: This is a pointer to a string to write to the file.
 *
 * Return: If the function fails - -1.
 *         Otherwise - 1.
 */
int create_file(const char *filename, char *text_content)
{
	int db, o, les = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (les = 0; text_content[les];)
			les++;
	}

	db = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	o = write(db, text_content, les);

	if (db == -1 || o == -1)
		return (-1);

	close(db);

	return (1);
}
