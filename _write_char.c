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
