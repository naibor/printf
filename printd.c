#include "main.h"

/**
 * print_d - A function that prints a decimal base 10
 * @i: base 10 integer to print
 * Return: number of printed digits
 */
int print_d(va_list i)
{
	int x[10];
	int j = 1, m = 1000000000, n, sum = 0, counter = 0;

	n = va_arg(i, int);
	if (n < 0)
	{
		n *= -1;
		_putchar('-');
		counter++;
	}
	x[0] = n / m;

	for (; j < 10; j++)
	{
		m /= 10;
		x[j] = (n / m) % 10;
	}

	for (j = 0; j < 10; j++)
	{
		sum += x[j];
		if (sum != 0 || j == 9)
		{
			_putchar('0' + x[j]);
			counter++;
		}
	}
	return (counter);
}

