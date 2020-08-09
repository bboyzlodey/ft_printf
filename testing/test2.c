//
// Created by Agrajag Sybil on 26/02/2020.
//
#include "../ft_printf.h"
/**
** 
** printdoubles() - функция печатает даблы в формате [sign]--[exp]--[mantissa]
**	Работает только для обычных даблов.
** printu(double f) - содержит логику вычисления двочного представления даблов.
**	Работает только для обычных даблов.
**/

void printdoubles()
{
	int size = sizeof(double) * 8;
	char *delim = "--";
	int len = size - g_current_data.str.len;
	if (len != 0)
	{
		g_current_data.str.str = ft_strjoindel(ft_memset(ft_strnew(len), '0', len), g_current_data.str.str);
	}
	write(1, "[", 1);
	write(1, g_current_data.str.str, 1);
	write(1, "]", 1);
	write(1, delim, 2);
	write(1, "[", 1);
	write(1, g_current_data.str.str + 1, 11);
	write(1, "]", 1);
	write(1, delim, 2);
	write(1, "[", 1);
	write(1, g_current_data.str.str + 12, 52);
	write(1, "]", 1);
	write(1, "\n", 1);
}

void printu(double f)
{
	unsigned long long int i, j;
	i = (unsigned long long int) f;
	j = *((unsigned long long int*)&f);
	int size_double = sizeof (double);
	int iterations = 0;

	convert_unint(j, 2);
	printdoubles();
	ft_strdel(&(g_current_data.str.str));
}

static void helper_float(float f)
{
    unsigned int src = *((unsigned int *)&f);
    get_binary(src, 2);
}

int main()
{
	initstructure();
	// printu(2.5);
	helper_float(-2.5f);
	// printf("sign: ");
	write(1, g_float.sign, 1);
	// printf("\nexponent: ");
	write(1, g_float.exponent, 8);
	// printf("\nmantissa: ");
	write(1, g_float.mantissa, 23);
	return 0;
}