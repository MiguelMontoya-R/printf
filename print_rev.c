#include <stdio.h>
#include "holberton.h"
/**
 * print_rev - print string in reverse
 * @ap: argument
 * Return: counter
 */
int print_rev(va_list ap)
{
	char *revs = va_arg(ap, char *);

	if (*revs)
	{
		print_rev(revs + 1);
		_putchar(*revs);
		counter++;
		s++;
	}
	return (counter);
}
