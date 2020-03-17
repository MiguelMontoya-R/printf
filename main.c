#include "holberton.h"
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int len1 = 0, len2 = 0;
	int len3 = 0, len4 = 0;
	char *str;

	str = "Hello Gonorreas";

	len1 = _printf("Let's fuck this %% shit %c fuck fuck\n", 'a');
	len2 = printf("Let's fuck this %% shit %c fuck fuck\n", 'a');

	len3 = _printf("Let's %% shit %c fuck %s fuck\n", 'a', str);
	len4 = printf("Let's %% shit %c fuck %s fuck\n", 'a', str);

	printf("%d %d %d %d", len1, len2, len3, len4);
	return (0);
}
