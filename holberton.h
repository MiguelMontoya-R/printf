#ifndef _HOLBERTON_H
#define _HOLBERTON_H
#include <stdarg.h>
#include <stdio.h>

/**
 * struct print - structure for printing various types
 * @ptr: specifiers list.
 * @link: link to the function to print.
 */

typedef struct print
{
	char *ptr; /* pointer to string "string", var */
	int (*link)(va_list); /* function pointer to va_args */
} format_list;

int (*format_checker(const char *specifier))(va_list);
int _printf(const char *format, ...);
int _putchar(char c);
int print_cha(va_list ap);
int print_str(va_list ap);

#endif
