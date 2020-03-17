#include "holberton.h"

/**
 * print_cha - function to print a character.
 * @ap: argument parameter.
 *
 * Return: 1 because this function only prints one char.
 */

int print_cha(va_list ap)
{
	char c = (char)va_arg(ap, int);

	_putchar(c);
	return (1);
}
