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

	_putchar(d);
	va_end(i);
	return (0);
}

