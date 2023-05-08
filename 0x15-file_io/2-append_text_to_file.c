#include <stdio.h>
#include "main.h"

/**
 * append_text_to_file - This appends text at the end of a file.
 * @filename: it's a pointer to the name of the file.
 * @text_content: This is the string to add to the end of the file.
 *
 * Return: If the function fails or filename is NULL - -1.
 *         If the file does not exist the user lacks write permissions - -1.
 *         Otherwise - 1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int n, m, les = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (les = 0; text_content[les];)
			les++;
	}

	n = open(filename, O_WRONLY | O_APPEND);
	m = write(n, text_content, les);

	if (n == -1 || m == -1)
		return (-1);

	close(n);

	return (1);
}
