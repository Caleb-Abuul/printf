#include "main.h"
#include <stdio.h>
/**
 * parser - parses thegiven input
 * @format: a pointer the string
 * @f_list: an array of format spcifiers and
 * corresponding functions
 * @arg_list: list of arguments
 * Return: number of characters printed
 */
int parser(const char *format, convert_t f_list[], va_list arg_list)
{
	int i, j, re_val, count;

	count = 0;
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			for (j = 0; f_list[j].sym != NULL; j++)
			{
				if (format[i + 1] == f_list[j].sym[0])
				{
					re_val = f_list[j].f(arg_list);
					if (re_val == -1)
						return (-1);
					count += re_val;
					break;
				}
			}
			if (f_list[j].sym == NULL && format[i + 1] != ' ')
			{
				if (format[i + 1] != '\0')
				{
					_write_char(format[i]);
					_write_char(format[i + 1]);
					count = count + 2;
				}
				else
				{
					return (-1);
				}
			}
			i += 1;
		}
		else
		{
			_write_char(format[i]);
			count++;
		}
	}
	return (count);
}
