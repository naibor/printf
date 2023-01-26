#include "main.h"
/**
 * print_Ss - A function
 * Description: prints a string and nonprintable
 * character ascii values
 * @S: string to print
 * Return: number of printed characters
 */
int print_Ss(va_list S)
{
	unsigned int x = 0;
	int counter = 0;
	char *str = va_arg(S, char *);

	if (str == NULL)
		str = "(null)";
	for (; str[x]; x++)
	{
		if (str[x] < 32 || str[x] >= 127)
		{
			_putchar('\\');
			_putchar('x');
			counter += 2;
			counter += print_x(S);
		}
		else
		{
			_putchar(str[x]);
			counter++;
		}
	}
	return (counter);
}
