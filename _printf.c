#include "main.h"
/**
 * get_format - Function pointer
 *
 * Description: get a format specifier
 *
 * @format: constant pointer parameter of type char, format specifier
 *
 * Return: returns pointer to function
 */
int (*get_format(const char *format))(va_list)
{
	unsigned int index;
	/* in occurence of c call function print_c.*/
	print_type specifier[] = {
		{"c", print_c},
		{"s", print_s},
		{"d", print_d},
		{"i", print_i},
		{"b", print_b},
		{"x", print_x},
		{"u", print_u},
		{"R", print_R},
		{"r", print_r},
<<<<<<< HEAD
		{"o", print_o},
=======
		{"p", print_p},
		{"S", print_S},
>>>>>>> 18ba6c8bcedcc29943435b90583cf8edb1d2bd18
		{NULL, NULL}
	};

	for (index = 0; specifier[index].type != NULL; index++)
	{
	/*loops throuch the specifier to match the format */
		if (*(specifier[index].type) == *format)
			break;
	}
	return (specifier[index].f);
}
/**
 * _printf -  Function
 * Description: produces output according to a format.
 *
 * @format: pointer parameter
 *
 * Return: number of characters printed
 */
int _printf(const char *format, ...)
{
	va_list a_list;
	int (*f)(va_list);
	unsigned int index = 0, count = 0;

	if (!format || format == NULL)
		return (-1);
	va_start(a_list, format);
	while (format && format[index])
	{
		/*checks if we have a astring without % formatter*/
		if (format[index] != '%')
		{
			_putchar (format[index]);
			index++;
			count++;
			continue;
		}
		/*when we have % within string*/
		else
		{
			/*if there are two %% print out %*/
			if (format[index + 1] == '%')
			{
				_putchar('%');
				index += 2;
				count++;
				continue;
			}
			/*look for character within specifier array*/
			else
			{
				f = get_format(&format[index + 1]);
				if (f == NULL)
					return (-1);
				index += 2;
				count += f(a_list);
				continue;
			}
		}
		index++;
	}
	va_end(a_list);
	return (count);
}
