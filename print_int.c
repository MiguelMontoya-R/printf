#include "holberton.h"

/**
 * print_int - function that prints an integer.
 * @ap: argument parameter.
 *
 * Return: number of printed characters.
 */

int print_int(va_list ap)
{
	int add = 0, n, count = 0;

	n = va_arg(ap, int);

	if (n == -2147483648)
	{
		n = n + 1;
		add = 1;
	}

	if (n < 0)
	{
		_putchar ('-');
		count++;
		n = -n;
	}

	if (n / 10)
		print_number(n / 10);

	if (add == 1)
	{
		_putchar ('8');
		count++;
	}
	else
	{
		_putchar (n % 10 + '0');
		count++;
	}
	return (count);
}
