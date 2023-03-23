#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H
#include <stdarg.h>
int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
int print_i(va_list ap);
int print_c(va_list ap);
int print_f(va_list ap);
int print_s(va_list ap);
char * itoa(int n, char * buffer, int radix);
typedef struct op
{
    char *fmt;
    int (*f)(va_list ptr);
} sl_ct;
#endif
