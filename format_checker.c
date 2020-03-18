#include "holberton.h"

/**
 * format_checker - function to check format specifiers and link to the
 * proper function to print.
 * @specifier: list of available specifiers to format.
 *
 * Return: function pointer to matched case.
 */

int (*format_checker(const char *specifier))(va_list)
{
	format_list format[] = {
		{"c", print_cha},
		{"s", print_str},
		{NULL, NULL}
	};

	int i = 0;

	while (format[i].ptr != NULL)
	{
		if (*(format[i].ptr) == *specifier)
			break;
		i++;
	}
	return (format[i].link);
}
