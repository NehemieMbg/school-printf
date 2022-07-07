#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>

int _printf(const char *format, ...);
int print_check(const char * const format, ...);

int print_char(va_list lst);
int print_string(va_list lst);

/**
* print_num
*/

int print_int(va_list l);
void print_number(int n);
int count_digit(int i);

/**
* putchar an puts function
*/
int _putchar(char c);
int _puts(char *str);

/**
 * @brief 
 * 
 */

typedef struct print_function
{
	char c;
	int (*f)(va_list);
} prt_f;

#endif
