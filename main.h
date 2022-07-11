#ifndef MAIN_H
#define MAIN_H

/**
 * struct print - Structure for types
 *
 * @type: type to be printed
 * @f: function to print
 *
 */
typedef struct print
{
	char *type;
	int (*f)(va_list);
} print_type;

int _putchar(char c);
int _printf(const char *format, ...);
int (*get_format(const char *format))(va_list);
int print_c(va_list ch);
int print_s(va_list ch);
#endif
