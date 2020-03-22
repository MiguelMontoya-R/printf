#include "holberton.h"
#include <stdlib.h>
#include <limits.h>

/**
 * print_num_rec2 - recursive function to print an integer.
 * @n: given number.
 *
 */

void print_num_rec2(int n)
{
	int number = 0, flag = 0;

	if (n == INT_MIN)
	{
		number = n + 1;
		flag = 1;
	}
	else if (n < 0)
	{
		number = -n;
		_putchar('-');
	}
	else
		number = n;
	if (n / 10)
		print_num_rec2(number / 10);
	if (flag == 1)
		_putchar('8');
	else
		_putchar(number % 10 + '0');
}

/**
 * print_dec - A function that prints a base 10 integer
 * @ap: Argument parameter.
 * Return: number of printed digits
 */

int print_dec(va_list ap)
{
	int n = 0, count = 1;

	n = va_arg(ap, int);

	if (n >= INT_MIN && n <= INT_MAX)
		print_num_rec2(n);
	else
		return (-1);
	while (n / 10)
	{
		n = n / 10;
		count++;
	}
	if (n < 0)
		return (count + 1);

	return (count);
}
