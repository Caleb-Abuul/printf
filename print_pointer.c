#include "main.h"
/**
 * print_pointer - prints pointer
 * @list: list of arguments
 * Return: size
 */
int print_pointer(va_list list)
{
	char *p_buffer;
	int size;

	p_buffer = int_to_a(va_arg(list, unsigned long int), 16);

	if (!_strcmp(p_buffer, "0"))
	{
		return (print("(nil)"));
	}
	size = print("0x");
	if (!_strcmp(p_buffer, "-1"))
		size += print("ffffffffffffffff");
	/*else
		size +=  printf(p_buffer);*/
	return (size);
}
/**
 * _strcmp - compares teo strings
 * @s1: first string
 * @s2: second string
 * Return: 0 (success)
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
	}
	return (0);
}
