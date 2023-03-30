#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>

/**
 *convert - structures for specifiers and corres
 *ponding functions
 *@sym: the specifier
 *@f: corresponding function
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
int print_d(va_list);
int print_binary(va_list);
/* func aids */
unsigned int base_len(unsigned int, int);
char *rev_string(char *);
void write_base(char *str);
char *_memcpy(char *des, char *src, unsigned int n);
int print_unsigned_number(unsigned int);
/* task3 functions */
int print_o(va_list list);
int print_u(va_list list);
int print_x(va_list list);
int print_X(va_list list);
/* task5 */
int print_S(va_list);
int hexa(int);
/* task 6 */
char *int_to_a(long int, int);
int _strcmp(char *, char *);
int print_pointer(va_list);
int buffer(char);
int print(char *);

#endif
