#include "main.h"
/**
 */
int print_x(va_list x)
{
	int i;
	unsigned int hx;
	int counter;

	hx = va_arg(x, unsigned int);
	counter+= _putchar(comvert(hx, 16));

	return (counter);
}
