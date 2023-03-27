#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>

/**
 * convert - structures for specifiers and corres-
 * ponding functions
 * @sym: the specifier
 * @f: corresponding function
 */

typedef struct convert
{
	char *sym;
	int (*f)(va_list);
} convert_t;

int _printf(const char *format, ...);
int parser(const char *format, convert_t f_list[], va_list arg_list);
int _write_char(char);
int print_char(va_list);
int print_str(va_list);
int print_percent(va_list);

#endif
