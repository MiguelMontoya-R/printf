#include <stdio.h>
#include "holberton.h"
/**
 * print_rev - print string in reverse
 * @ap: argument
 * Return: counter
 */
int print_rev(va_list ap)
{
	int counter, n;
	char *string = va_arg(ap, char *);

	counter = 0;

	while (string[counter] != '\0')
	{
		counter++;
	}

	n = counter - 1;
	while (n >= 0)
	{
		_putchar(string[n]);
		n--;
	}
	_putchar('\n');
	return (counter);
}
