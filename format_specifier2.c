#include "main.h"
#include <stdio.h>
/**
*print_S - Handle the following custom conversion specifier
*@list: an arguments list
*Return: Always 0 (Success)
*/
int print_S(va_list list)
{
	char *s;

	int c, i;

	c = 0;
	s = va_arg(list, char *);
	if (s == NULL)
		s = "(null)";
	for (i = 0; s[i]; i++)
	{
		if ((s[i] > 0 && s[i] < 32) || s[i] >= 127)
		{
			write(1, "\\", 1);
			write(1, "x", 1);
			c += 2;
			c += hexa(s[i]);
		}
		else
		{
			_write_char(s[i]);
			c++;
		}
	}
	return (c);
}
/**
*print_r - function to print a reversed string
*@list: an arguments list
*Return: Always 0 (Success)
*/
int print_r(va_list list)
{
	char *s;

	int n, c;

	n = 0;
	c = 0;
	s = va_arg(list, char *);
	while (s[n] != '\0')
	{
		n++;
	}
	c = n;
	n--;
	while (n >= 0)
	{
		_write_char(s[n]);
		n--;
	}
	return (c);
}
