#include "main.h"
/**
 * print - prints char
 * @str: a string pointer
 * Return: an integer
 */
int print(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; ++i)
	{
		_write_char(str[i]);
	}
	return (i);
}
