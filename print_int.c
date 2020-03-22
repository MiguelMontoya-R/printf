#include "holberton.h"
#include <stdlib.h>
#include <limits.h>

/**
 * print_num_rec - recursive function to print an integer.
 * @n: given number.
 *
 */

void print_num_rec(int n)
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
		print_num_rec(number / 10);
	if (flag == 1)
		_putchar('8');
	else
		_putchar(number % 10 + '0');
}


/**
 * print_int - A function that prints a base 10 integer
 * @ap: argument parameter.
 * Return: number of printed digits
 */

int print_int(va_list ap)
{
	int n = 0, count = 1;

	n = va_arg(ap, int);

	if (n >= INT_MIN && n <= INT_MAX)
		print_num_rec(n);
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
