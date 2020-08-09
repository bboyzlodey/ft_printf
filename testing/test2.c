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

static void print_binary(int c){
	convert_unint(c, 2);
	printf("Value: %d\t", c);
	printf(ANSI_COLOR_YELLOW"Count of Bits:%d\n"ANSI_COLOR_RESET, g_current_data.str.len);
	printf(ANSI_COLOR_GREEN"Bits: %s\n\n"ANSI_COLOR_RESET, g_current_data.str.str);
	ft_strdel(&(g_current_data.str.str));
}

static unsigned int float_to_unint(float f)
{
	return *((unsigned int*) &f);
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
	char a = 1;

	print_binary(exp_calc(float_to_unint(25)));
	print_binary(sign_calc(float_to_unint(-25)));
	float tmp = 10.78;
	unsigned int tmpf = (unsigned int) tmp;
	printf("test: %d\n", tmpf);
	tmp = tmp - (float) tmpf;
	tmpf = (unsigned int) (tmp * 10);
	tmp *= 10;
	printf("test: %d\tfloat: %f\n", tmpf, tmp);
	tmp = tmp - tmpf;
	tmpf = (unsigned int) (tmp * 10);
	printf("test: %d\tfloat: %f\n", tmpf, tmp);
	printf("float is: %lf\n", (10.78f - 10) * 10);
	printf("Max value of unsigned int: %u\n", (unsigned int)-1);
	printf("Max value of unsigned long int: %lu\n", (unsigned long int) -1);
	printf("Max value of unsigned long long int: %llu\n", (unsigned long long int) -1);
	return 0;
}