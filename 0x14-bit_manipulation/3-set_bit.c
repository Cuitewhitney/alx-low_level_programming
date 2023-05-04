#include <stdio.h>
#include "main.h"

/**
 * set_bit - This sets a bit at a givenn index to 1
 * @n: This is the pointer to the number to be changed
 * @index: Thias is the index of the bit to be set to 1
 *
 * Return: returns 1 if sucessful otherswise -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
