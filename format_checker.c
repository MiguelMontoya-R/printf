

int (*format_checker(char *specifier))(va_list)
{
	s_print format[] = {
		{"c", print_cha},
		{"s", print_str},
		{"%", print_per},
		{"d", print_dec},
		{"i", print_int},
		{"b", print_bin},
		{"u", print_uns},
		{"o", print_oct},
		{"x", print_hexl},
		{"X", print_hexu},
		{"p", print_ptr},
		{"+", print_plu},
		{" ", print_spc},
		{"#", print_has},
		{"l", print_lon},
		{"h", print_h},
		{"0", print_zer},
		{"-", print_lef},
		{"r", print_rev},
		{"R", print_revu},
		{"f", print_flo},
		{"e", print_exp},
		{"g", print_g},
		{"S", print_s},
		{NULL, NULL}
	};

	int i = 0;

	while (i < 24)
	{
		if (strcmp(ops[i].op, s) == 0)
			return (ops[i].f);
		i++;
	}
	printf("Error\n");
	exit(99);
	return (NULL);
}
