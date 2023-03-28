#include "main.h"
#include <stdio.h>
/**
 * print_char - prints a character
 * @list: a list of arguments
 * Return: number of printed characters
 */
int print_char(va_list list)
{
	_write_char(va_arg(list, int));
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
		_write_char(str[i]);
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
	_write_char('%');
	return (1);
}
/**
*print_d - prints a decimal number
*@list: a list of arguments
*Return: number of digits printed
*/
int print_d(va_list list)
{
	int m, c, i, k, n;

	char arr[100000];

	c = 0;
	k = 0;
	n = va_arg(list, int);
	if (n <= 0)
	{
		if (n == 0)
		{
			_write_char('0');
			return (1);
		}
		n *= -1;
		k = 1;
		write(1, "-", 1);
	}
	m = n;
	while (n != 0)
	{
		c++;
		n /= 10;
	}
	k += c;
	for (i = 0; i < c; i++)
	{
		arr[i] = (m % 10) + 48;
		m /= 10;
	}
	for (i = c - 1; i >= 0; i--)
	{
		write(1, &arr[i], 1);
	}
	return (k);
}
