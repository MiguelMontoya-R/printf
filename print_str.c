#include "holberton.h"

/**
 * print_str - function that prints a string.
 * @ap: argument parameters.
 *
 * Return: number of printed characters.
 */

int print_str(va_list ap)
{
	int i = 0;
	char *str = va_arg(ap, char *);

	while (str[i])
		_putchar(str[i++]);
	return (i);
}
