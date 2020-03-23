#include "holberton.h"

/**
 * rot13 - function that encodes a string using rot13.
 * @s: given string
 * Return: encoden string
 */

int print_rot(va_list ap)
{
	char *str;
	char str1[] = "AABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char str2[] = "NNOPQRSTUVWXYZABCDEFGIFJKLMnopqrstuvwxyzabcdefghijklm";
	int ia = 0, ib = 0, count = 0;

	str = va_arg(ap, char *);

	while (str[ia])
	{
		for (ib = 0; str1[ib]; )
		{
			if (str[ia] == str1[ib])
			{
				_putchar(str2[ib]);
				count++;
				ia++;
				ib = 0;
			}
			ib++;
		}
		if (str1[ib] == '\0')
		{
			_putchar(str[ia]);
			count++;
		}
		ia++;
	}
	return (count);
}
