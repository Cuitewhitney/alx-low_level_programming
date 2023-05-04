#include <stdio.h>
#include "main.h"

/**
 * clear_bit - This sets the value of a given bit to 0
 * @n: This is the pointer to the number to be changed
 * @index: The index of the bit to be cleared
 *
 * Return: to return 1 if sucessful otherwise -1
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
