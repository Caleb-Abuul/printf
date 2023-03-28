#include "main.h"
#include <stdio.h>

/**
 * rev_string - reverses a string
 * @s: string
 * Return: a character pointer
 */
char *rev_string(char *s)
{
	int len, head;
	char temp;
	char *des;

	for (len = 0; s[len] != '\0'; len++)
	{}
	des = malloc(sizeof(char) * len + 1);
	if (des == NULL)
		return (NULL);
	_memcpy(des, s, len);
	for (head = 0; head < len; head++, len--)
	{
		temp = des[len - 1];
		des[len - 1] = des[head];
		des[head] = temp;
	}
	return (des);
}
/**
 * write_base - prints character on stdout
 * @str: string
 */
void write_base(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		_write_char(str[i]);
}
/**
 * base_len - calculates an octal number length
 * @num: the number
 * @base: base to be calculated
 * Return: length of num
 */
unsigned int base_len(unsigned int num, int base)
{
	unsigned int i;

	for (i = 0; num > 0; i++)
	{
		num /= base;
	}
	return (i);
}
/**
 * _memcpy - copies memory area
 * @des: destination
 * @src: source
 * @n: number of bytes
 * Return: pointer to des
 */
char *_memcpy(char *des, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		des[i] = src[i];
	des[i] = '\0';
	return (des);
}
