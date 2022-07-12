#include "main.h"

/**
 * print_d - print out decimals no. (base 10)
 *
 * @d: parameter of type va_list, what to print
 *
 * return: 0 (success)
 */
int print_d(va_list i)
{
	int d = va_arg(i, int);
	
	if (d == 0)
	{
		return(_putchar('0'));
	}
	if (d < 0)
	{
		d *= -1;
		_putchar('-');
	}
	_putchar(d);
	va_end(i);
	return (0);
}

