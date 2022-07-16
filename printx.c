#include "main.h"
#include <stdio.h>
/**
 * print_x - Function
 *
 * Description: Prints a hexadecimal
 *
 * @x: list of values to be printed
 *
 * Return: returns count
 */
int print_x(va_list x)
{
	char *i;
	unsigned int hx;
	int counter;

	hx = va_arg(x, unsigned int);
	i = convert(hx, 16, 1);
	for (counter = 0; i[counter]; counter++)
	{
		_putchar(i[counter]);
	}

	return (counter);
}
