#include "main.h"
/**
 * print_number - Function
 *
 * Description: prints an integer.
 *
 * @n: parameter of type int,n
 *
 */
void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	if (n / 10 != 0)
		print_number(n / 10);

	_putchar(n % 10 + '0');
}
/**
 * convert - Function
 * Description: Converts numbers to their bases
 *
 * @num: unsigned int parameter, number to be converted
 * @base: int parameter , base to be converted to
 *
 * Return: returns a char pointer.
 */
char *convert(unsigned int num, int base)
{
	static char Hx[]="0123456789ABCDEF", buffer[50];
	char *ptr;

	ptr = &buffer[49];
	*ptr = '\0';
	

	do
	{
		*ptr = Hx[num % base];
		num /= base;
	}while(num != 0);

	return (ptr);	

}
