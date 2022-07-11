#include "main.h"

/**
 * print_c - print out characters 
 *
 * @ch: parameter of type va_list, what to print
 *
 * return: 0 (success)
 */
int print_c(va_list ch)
{
	char str = (char)va_arg(va_list ch, int);
	
	_putchar(str);
	va_end(va_list ch);
	return (0);
}

