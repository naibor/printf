#include "main.h"

/**
 * print_c - print out characters
 *
 * Description: function that prints characters
 *
 * @ch: parameter of type va_list, what to print
 *
 * Return: 0 (success)
 */
int print_c(va_list ch)
{
	char str = (char)va_arg(ch, int);

	_putchar(str);
	va_end(ch);
	return (0);
}

