#include "main.h"

/**
 * print_i - Function
 *
 * Description: prints out an integer
 *
 * @i: parameter of type va_list, what to print
 *
 * return: 0 (success)
 */
int print_i(va_list i)
{
	int count = 0;
	int x = 1;
	int num = va_arg(i, int);
	
	if (num < 0)
	{
		count+= _putchar('-');
		num = num * -1;
	}
	for (; num / x > 9;)
	{
		x *= 10;
	}
	for (; x != 0;)
	{
		count+= _putchar('0' + num/x);
		num %= x;
		x /= 10;
	}

	return (count);
}
