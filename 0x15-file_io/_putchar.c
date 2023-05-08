#include <unistd.h>

/*
 * _putchar - This writes the char c to standard output
 * @c: This is the char to be printed
 *
 * Return: if this is successful, it returns 1.
 * otherwiae -1 is returned, and errno i set appropriately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
