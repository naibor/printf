#include "main.h"

/**
 * print_p - A function
 *
 * Description: prints an address
 *
 * @p: address to print
 * Return: number of printed characters
 */
int print_p(va_list p)
{
	int counter = 0;
	unsigned int arr[16];
	unsigned int x = 0, sum = 0;
	unsigned long n, m = 1152921504606846976;
	char *str = "(nil)";

	n = va_arg(p, unsigned long);
	if (n == 0)
	{
		for (; str[x]; x++)
		{
			_putchar(str[x]);
			counter++;
		}
		return (counter);
	}
	_putchar('0');
	_putchar('x');
	counter = 2;

	arr[0] = n / m;
	for (x = 1; x < 16; x++)
	{
		m /= 16;
		arr[x] = (n / m) % 16;
	}
	for (x = 0; x < 16; x++)
	{
		sum += arr[x];
		if (sum || x == 15)
		{
			if (arr[x] < 10)
				_putchar('0' + arr[x]);
			else
				_putchar('0' + ('a' - ':') + arr[x]);
			counter++;
		}
	}
	return (counter);
}
