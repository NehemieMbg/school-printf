#include "main.h"

/**
 * _printf - Prints 
 * 
 */

int _printf(const char *format, ...)
{
	prt_f prt[] = {
		{'c', print_char},
		{'s', print_string},
		{'d', print_int},
		{'i', print_int},
		{'\0', NULL},
	};

	int i = 0, count = 0, j;
	va_list lst;

	va_start(lst, format);

	while (format[i])
	{
		j = 0;
		if (format[i] == '%')
		{
			while (prt[j].c)
			{
				if (prt[j].c == format[i + 1])
				{
					count += prt[j].f(lst);
				}
				j++;
			}
			i++;
		}
		else{
			write(STDOUT_FILENO, &format[i], 1);
			count += 1;
		}
		i++;
	}
	va_end(lst);
	return (count);
}
