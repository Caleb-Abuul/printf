#include "main.h"
/**
 * _write_char - prints a character or strings on the
 * standard output
 * @c: character to be printed
 * Return: 1 if success, -1 if not
 */
int _write_char(char c)
{
	return (write(1, &c, 1));
}
/**
 * buffer - saves character
 * @c: the character to be saved in buffer
 * Return: 1.
 */
int buffer(char c)
{
	static char buffering[1024];
	static int i;

	if (c == -1 || i == 1024)
	{
		write(1, buffering, i);
		i = 0;
	}
	if (c != -1)
	{
		buffering[i++] = c;
	}
	return (1);
}
