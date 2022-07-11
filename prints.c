#include "main.h"
/*
 * print_s - Function prints string
 *
 * @ch: parameter used
 *
 * Return: (0) success
 */
int print_s(va_list ch)
{
	 char str = (char)va_arg(va_list ch, char *);
	 unsigned int index;

	if (str == NULL)
		str = "(null)";
	for (index = 0; str[index]; index++)
	{
		_putchar(str[index]);
	}

	va_end(va_list ch);
	return (index);
}

