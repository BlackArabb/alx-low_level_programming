#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: parameter
 */
void print_binary(unsigned long int n)
{
	int j, num = 0;
	unsigned long int pre;

	for (j = 63; j >= 0; j--)
	{
		pre = n >> j;

		if (pre & 1)
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
