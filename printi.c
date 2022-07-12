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
	int num = va_arg(i, int);
	
	count++;
	print_number(num);

	return (count);
}
