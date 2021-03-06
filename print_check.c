#include "main.h"

/**
 * @brief 
 * 
 */

int print_check(const char * const format, ...)
{
	prt_f prt[] = {
		{'c', print_char},
		{'s', print_string},
		{'\0', NULL},
	};

	int i = 0, count = 0, j;
	va_list lst;

	va_start(lst, format);

	while (format[i])
	{
		j = 0;
		while (prt[j].c)
		{
			if (prt[j].c == format[i])
			{
				count += prt[j].f(lst);
			}
			j++;
		}
		i++;
	}
	va_end(lst);
	return (count);
}
