#include <stdio.h>
#include "main.h"

/**
 * flip_bits - This counts the number of bits to be changed to get from one number to another
 * @n: My first number
 * @m: My second number
 *
 * Return: This is the number of bits to be changed
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int a, num = 0;
	unsigned long int recent;
	unsigned long int landmark = n ^ m;

	for (a = 63; a >= 0; a--)
	{
		recent = landmark >> a;
		if (recent & 1)
			num++;
	}

	return (num);
}
