#include "main.h"
#include <stdio.h>
/**
*print_u - a function to print an unsigned int
*@list: an arguments list
*Return: Always 0 (Success)
*/
int print_u(va_list list)
{
	int l;

	long m, c, i, k, n;

	char arr[100000];

	c = 0;
	k = 0;
	l = va_arg(list, int);
	if (l <= 0)
	{
		if (l == 0)
		{
			_write_char('0');
			return (1);
		}
		else
		{
			n = 4294967296 + l;
		}
	}
	else
	{
		n = l;
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
		write(1, &arr[i], 1);
	return (k);
}
/**
*print_o - a function to convert a decimal to octal and print it
*@list: an arguments list
*Return: Always 0 (Success)
*/
int print_o(va_list list)
{
	long n, i, c;

	char arr[1000000];

	n = va_arg(list, long);
	c = 0;
	if (n < 0)
	{
		n = 2147483647 - (2147483647 - (n));
	}
	while (n != 0)
	{
		arr[c] = (n % 8) + 48;
		n /= 8;
		c++;
	}
	for (i = c - 1; i >= 0; i--)
	{
		write(1, &arr[i], 1);
	}
	return (c);
}
/**
*print_x - a function to convert a decimal to hexadecimal and print it
*@list: an arguments list
*Return: Always 0 (Success)
*/
int print_x(va_list list)
{
	long n, i, c;

	char arr[100000];

	n = va_arg(list, long);
	c = 0;
	if (n < 0)
	{
		n = 2147483647 - (2147483647 - (n));
	}
	else if (n == 0)
	{
		write(1, "0", 1);
		return (1);
	}
	while (n != 0)
	{
		if (n % 16 > 9)
		{
			arr[c] = (n % 16) + 87;
			n /= 16;
		}
		else
		{
			arr[c] = (n % 16) + 48;
			n /= 16;
		}
		c++;
	}
	for (i = c - 1; i >= 0; i--)
	{
		write(1, &arr[i], 1);
	}
	return (c);
}
/**
*print_X - a function to convert a decimal to hexadecimal and print it
*@list: an arguments list
*Return: Always 0 (Success)
*/
int print_X(va_list list)
{
	long n, i, c;

	char arr[100000];

	n = va_arg(list, long);
	c = 0;
	if (n < 0)
	{
		n = 2147483647 - (2147483647 - (n));
	}
	else if (n == 0)
	{
		write(1, "0", 1);
		return (1);
	}
	while (n != 0)
	{
		if (n % 16 > 9)
		{
			arr[c] = (n % 16) + 55;
			n /= 16;
		}
		else
		{
			arr[c] = (n % 16) + 48;
			n /= 16;
		}
		c++;
	}
	for (i = c - 1; i >= 0; i--)
		write(1, &arr[i], 1);
	return (c);
}
/**
*hexa - a function to converst into hexadecimal
*@n: a decimal integer
*Return: Always 0 (Success)
*/
int hexa(int n)
{
	long i, c;

	char arr[10000];

	c = 0;
	if (n < 0)
	{
		n = 2147483647 - (2147483647 - (n));
	}
	while (n != 0)
	{
		if (n % 16 > 9)
		{
			arr[c] = (n % 16) + 55;
			n /= 16;
		}
		else
		{
			arr[c] = (n % 16) + 48;
			n /= 16;
		}
		c++;
	}
	if (c == 1)
	{
		write(1, "0", 1);
	}
	for (i = c - 1; i >= 0; i--)
	{
		write(1, &arr[i], 1);
	}
	if (c == 1)
		c++;
	return (c);
}
