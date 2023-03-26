#include "main.h"
#include <stdarg.h>
/**
 * print_char - prints a character
 * @list: a list of arguments
 * Return: number of printed characters
 */
int print_char(va_list list)
{
	_write(va_arg(list, int));
	return (1);
}

/**
 * print_str - prints a string
 * @list: a list of arguments
 * Return: number of printed characters
 */
int print_str(va_list list)
{
	int i;
	char *str;

	str = va_arg(list, char *);
	if (str == NULL)
		str = "(null)";
	for (i = 0; str[i] != '\0'; i++)
	{		
		_write(str[i]);
	}	
	return (i);
}

/**
 * print_percent - prints a percent sign
 * @list: a list of arguments
 * Return: number of characters printed
 */
int print_percent(__attribute__((unused))va_list list)
{
	_write('%');
	return (1);
}
