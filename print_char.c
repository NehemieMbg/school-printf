#include "main.h"

/**
 * _print_c - Prints characters
 * @lst: is the list
 */

int print_char(va_list lst)
{
	char c = va_arg(lst, int);
	write(STDOUT_FILENO, &c, 1);

	return (1);
}
