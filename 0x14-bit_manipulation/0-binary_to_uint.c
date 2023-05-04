#include <stdio.h>
#include "main.h"

/**
 * binary_to_uints - This converts a binary number to an unsigned integer
 * @b: This is the string containing the binary number
 *
 * Return: The return function returns the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	int a;
	unsigned int my_val = 0;

	if (!b)
		return (0);

	for (a = 0; b[a]; a++)
	{
		if (b[a] < '0' || b[a] > '1')
			return (0);
		my_val = 2 * my_val + (b[a] - '0');
	}

	return (my_val);
}
