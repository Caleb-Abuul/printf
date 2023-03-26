#include "main.h"
/**
 * _write - prints a character or strings on the
 * standard output
 * @c: character to be printed
 * Return: 1 if success, -1 if not
 */
int _write(char c)
{
	return (write(1, &c, 1));
}
