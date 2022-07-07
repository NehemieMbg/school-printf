#include "main.h"

int _strlen(char *s) {
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
 * _print_c - Prints characters
 * @lst: is the list
 */

int print_string(va_list lst)
{
	char *s = va_arg(lst, char*);
	int len = _strlen(s);

	write(1, s, len);

	return (len);
}
