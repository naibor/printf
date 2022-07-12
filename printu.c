#include "main.h"
/**
 * print_u - Function
 *
 * Description:  Prints an unsigned number
 *
 * @u: unsigned integer to be printed
 *
 * Return: A count of numbers printed
 */
int print_u(va_list u)
{
	int div = 1, count = 0;
	unsigned int num;

	num = va_arg(u, unsigned int);
	if (num == 0)
		_putchar('0');
	if (num < 1)
		return (-1);
	for (; num / div > 9; )
		div *= 10;
	for (; div != 0; )
	{
		count += _putchar('0' + num / div);
		num %= div;
		div /= 10;
	}
	return (count);
}

