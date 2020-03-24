#include "holberton.h"
/**
 * print_rec - print in reverse with recursion
 * @str: pointer to string
 * Return: void
 */
void print_rec(char *str)
{
	if (*str)
	{
		print_rec(str + 1);
		_putchar(*str);
	}
}
/**
 * print_rev - print a string in reverse
 *
 * @ap: va_list
 * Return: counter
 */
int print_rev(va_list ap)
{
	int counter = 0;
	char *str;

	str = va_arg(ap, char *);

	while (str[counter])
		counter++;

	print_rec(str);

	return (counter);
}
