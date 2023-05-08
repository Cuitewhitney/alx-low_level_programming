#include <stdio>
#include "main.h"

/**
 * create_file - This is the function that creates a new file
 * @filename: This is also the Pointer to point to the text
 * @text_content: This pointer points to the string content
 *
 * Return: This returns 1 if sucessfull, Otherwise -1
 */
int create_file(const char *filename, char *text_content)
{
	int db, len, l;

	if (filename == NULL)
		return (-1);

	db = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);

	if (db == -1)
		return (-1);

	if (text_content != NULL)
	{

		for (l = 0; text_content[l]; l++)
			;
		len = write(db, text_content, l);
		if (len == -1)
			return (-1);
	}
	close(db);
	return (1);
}
