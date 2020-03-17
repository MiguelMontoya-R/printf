#include "holberton.h"

/**
 * format_checker - function to check format specifiers and link to the
 * proper function to print.
 * @specifier: list of available specifiers to format.
 *
 * Return: function pointer to matched case.
 */

int (*format_checker(const char *specifier))(va_list)
{
	format_list format[] = {
		{"c", print_cha},
		{"s", print_str},
/*		{"d", print_dec},
 *		{"i", print_int},
 *		{"b", print_bin},
 *		{"u", print_uns},
 *		{"o", print_oct},
 *		{"x", print_hexl},
 *		{"X", print_hexu},
 *		{"p", print_ptr},
 *		{"+", print_plu},
 *		{" ", print_spc},
 *		{"#", print_has},
 *		{"l", print_lon},
 *		{"h", print_h},
 *		{"0", print_zer},
 *		{"-", print_lef},
 *		{"r", print_rev},
 *		{"R", print_revu},
 *		{"f", print_flo},
 *		{"e", print_exp},
 *		{"g", print_g},
 *		{"S", print_s},
 */		{NULL, NULL}
	};

	int i = 0;

	while (format[i].ptr != NULL)
	{
		if (*(format[i].ptr) == *specifier)
			break;
		i++;
	}
	return (format[i].link);
}
