#include <unistd.h>

/*
 * _putchar - it writes the char c to stdout
 * @c: The char to print
 *
 * Return: on success 1.
 * on error, -1 is returned, and errno i set appropriately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
