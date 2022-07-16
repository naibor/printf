#include "main.h"
#include <stdio.h>
/**
 */
int print_x(va_list x)
{
	char *i;
	unsigned int hx;
	int counter;

	hx = va_arg(x, unsigned int);
	i = convert(hx, 16, 1);
	printf("USING PRINTF:%s",i);
	for (counter = 0; i[counter]; counter++)
	{
		_putchar(i[counter]);
	}

	return (counter);
}
