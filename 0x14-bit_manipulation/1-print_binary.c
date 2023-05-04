#include <stdio.h>
#include "main.h"

/**
 * print_binary - This prints the binary equivalent of a decimal number
 * @n: This is the number to be printed in binary
 */
void print_binary(unsigned long int n)
{
	int a, num = 0;
	unsigned long int recent;

	for (a = 63; a >= 0; a--)
	{
		recent = n >> a;

		if (recent & 1)
		{
			_putchar('1');
			num++;
		}
		else if (num)
			_putchar('0');
	}
	if (!num)
		_putchar('0');
}
