#include "main.h"
#include <stdio.h>
int hex_check(int, char);
/**
 * print_binary - converts a base 10 number to
 * binary
 * @list: list of arguments
 * Return: length of printed number
 */
int print_binary(va_list list)
{
	unsigned int num;
	int i, len;
	char *string;
	char *rev_str;

	num = va_arg(list, unsigned int);
	if (num == 0)
		return (_write_char('0'));
	len = base_len(num, 2);
	string = malloc(sizeof(char) * len + 1);
	if (string == NULL)
		return (-1);

	for (i = 0; num > 0; i++)
	{
		if (num % 2 == 0)
			string[i] = '0';
		else
			string[i] = '1';
		num /= 2;
	}
	string[i] = '\0';
	rev_str = rev_string(string);
	if (rev_str == NULL)
		return (-1);
	write_base(rev_str);
	free(string);
	free(rev_str);
	return (len);
}
/**
 * hex_check - checks which hex function calls
 * @num: number to convert
 * @x: hex function calling
 * Return: ASCII value for letter
 */
int hex_check(int num, char x)
{
	char *hex = "abcdef";
	char *Hex = "ABCDEF";

	num = num - 10;
	if (x == 'x')
	{
		return (hex[num]);
	}
	else
	{
		return (Hex[num]);
	}
	return (0);
}
