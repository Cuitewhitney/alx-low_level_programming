#include <stdio.h>
#include "main.h"

/**
 * get_endianness - This actually checks if a machine is little or big endian
 * Return: 0 is returned if big while 1 is returned if little
 */

int get_endianness(void)
{
	unsigned int a = 1;
	char *b = (char *) &a;

	return (*b);
}
