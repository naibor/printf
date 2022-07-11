#include "main.h"
#include <stdio.h>
#include <stdarg.h>

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
		{"c", print_c}
		{"NULL", NULL}
	}

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

	if (!format || format == NULL)
	{
		return (-1);
	}

	va_start(a_list, format);
	
	/*va_list a_list;*/
	printf("THIS IS FORMAT:%s\n", format);
	printf("INDXES OF FORMAT: %c\n", format[0]);
	/*va_start(format, a_list);*/

	
        return (0);
}
