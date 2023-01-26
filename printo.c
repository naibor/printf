#include "main.h"

/**
 * print_o - Function to print int in octal notation
 * @o: unsigned int to print
 * Return: number of printed digits
 */

int print_o(va_list o)
{
	unsigned int x[11];
	unsigned int y = 1, m = 1073741824, n, sum = 0;
	int count;

	n = va_arg(o, unsigned int);
	x[0] = n / m;
	for (; y < 11; y++)
	{
		m /= 8;
		x[y] = (n / m) % 8;
	}
	for (y = 0; y <11; y++)
	{
		sum += x[y];
		if (sum || y == 10)
		{
			_putchar('0' + x[y]);
			count++;
		}
	}
	return (count);
}
