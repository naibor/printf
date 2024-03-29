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
char *convert(unsigned int num, int base, int lowercase);
void print_number(int n);
int print_c(va_list ch);
int print_s(va_list ch);
int print_d(va_list d);
int print_i(va_list i);
int print_b(va_list b);
int print_u(va_list u);
int print_o(va_list o);
int print_x(va_list x);
int print_S(va_list S);
int print_p(va_list p);
int print_r(va_list r);
int print_R(va_list R);
#endif
