#include "main.h"
/**
 * _printf - prints formatted strings
 * @format: pointer to the format
 * @...: a list or variable parameters
 * Return: returns number of character printed
 */
int _printf(const char *format, ...)
{
	int count;
	convert_t f_list[] = {
		{"c", print_char},
		{"s", print_str},
		{"%", print_percent},
		{"d", print_d},
		{"i", print_d},
		{"b", print_binary},
		{"u", print_u},
		{"o", print_o},
		{"x", print_x},
		{"X", print_X},
		{"S", print_S},
		{"p", print_pointer},
		{"r", print_r},
		{NULL, NULL}};
	va_list arg_list;

	if (format == NULL)
		return (-1);

	va_start(arg_list, format);
	/* calls parser function */
	count = parser(format, f_list, arg_list);
	va_end(arg_list);
	return (count);
}
