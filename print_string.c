#include "main.h"

/**
 * _strlen - Function that calculated the length of a string
 *
 * @s: is the pointer that point to the first char of a string
 *
 * Return: the lenght of a string
 */

int _strlen(char *s)
{
	int i = -1;

	if (s)
	{
		i = 0;
		while (s[i])
			i++;
	}
	return (i);
}

/**
 * print_string - Function that prints a string
 * @lst: is the list
 *
 * Return: return len
 */

int print_string(va_list lst)
{
	char *s = va_arg(lst, char*);
	int len = _strlen(s);

	write(1, s, len);

	return (len);
}
