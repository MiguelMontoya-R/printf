#include "holberton.h"

/**
 * print_recursion_bin - recursive function to print a binary.
 * @n: given number.
 *
 * Return: nothing.
 */

void print_recursion_bin(unsigned long int n)
{
	if (n == 0)
		return;
	print_recursion_bin(n >> 1);
	_putchar ((n & 1) + '0');
}

/**
 * print_bin - function that converts a number into a binary.
 * @ap: Argument parameter
 * Return: number of printed characters.
 */

int print_bin(va_list ap)
{
	unsigned int num, count = 0;

	num = va_arg(ap, unsigned int);

	if (num == 0)
	{
		_putchar ('0');
		count++;
	}
	else
		print_recursion_bin(num);

	while (num)
	{
		num >>= 1;
		count++;
	}
	return (count);
}
