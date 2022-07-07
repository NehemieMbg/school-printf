#include "main.h"

/**
 * print_char - Prints characters
 * @lst: is the list
 *
 * Return: (1)
 */

int print_char(va_list lst)
{
	char c = va_arg(lst, int);

	write(STDOUT_FILENO, &c, 1);

	return (1);
}
