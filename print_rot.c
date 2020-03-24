#include "holberton.h"

/**
 * print_rot - function that encodes a string using rot13.
 * @ap: Argument parameter
 * Return: number of printed characters.
 */

int print_rot(va_list ap)
{
	char *str;
	char str1[] = "AABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char str2[] = "NNOPQRSTUVWXYZABCDEFGIFJKLMnopqrstuvwxyzabcdefghijklm";
	int ia = 0, ib = 0, count = 0;

	str = va_arg(ap, char *);

	for (; str[ia]; ia++)
	{
		for (ib = 0; str1[ib]; ib++)
		{
			if (str[ia] == str1[ib])
			{
				_putchar(str2[ib]);
				count++;
				break;
			}
		}
		if (str1[ib] == '\0')
		{
			_putchar(str[ia]);
			count++;
		}
	}
	return (count);
}
