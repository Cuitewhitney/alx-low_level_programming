#include <stdio.h>
#include "main.h"

/**
 * get_bit - This returns the value of the bit at an index in decimal number
 * @n: This is the number to be searched
 * @index: This is the index of the bit
 *
 * Return: This is said to return the value of the bit
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int my_val;

	if (index > 63)
		return (-1);

	my_val = (n >> index) & 1;

	return (my_val);
}
