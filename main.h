#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stddef.h>
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
void print_number(int n);
int print_d(va_list d);
int print_i(va_list i);
int print_x(va_list x);
int print_u(va_list u);
int print_b(va_list b);
int print_r(va_list r);
int print_R(va_list R);
#endif
