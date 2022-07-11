#include "main.h"
/*
 * print_s - prints string
 *
 * @ch parameter used
 *
 * return (0) success
 */

int print_s(va_list ch)
{
	 char str = (char)va_arg(va_list ch, char *);

        _putchar(str);
        va_end(va_list ch);
        return (0);
}

