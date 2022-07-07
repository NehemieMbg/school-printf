#include "main.h"

/**
 * print_int - prints an integer
 * @lst: va_list of arguments from _printf
 * Return: number of char printed
 */

int print_int(va_list lst)
{
  int n = va_arg(lst, int);
  int res = count_digit(n);
  if (n <= 0)
    res++;
  print_number(n);
  return (res);
}
