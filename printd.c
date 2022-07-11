#include "main.h"

/**
 * print_d - print out decimals no. (base 10)
 *
 * @d: parameter of type va_list, what to print
 *
 * return: 0 (success)
 */
int print_d(va_list d)
{
	int d = va_arg(d, int);

	_putchar(d);
	va_end(va_list d);
	return (0);
}

