//
// Created by Agrajag Sybil on 26/02/2020.
//
#include "../ft_printf.h"
/**
*
* Коммент
*
* */

void printdoubles()
{
	int size = sizeof(double) * 8;
	char *delim = "--";
	int len = size - g_current_data.str.len;
	// printf("len: %d\n", len);
	if (len != 0)
	{
		g_current_data.str.str = ft_strjoindel(ft_memset(ft_strnew(len), '0', len), g_current_data.str.str);
	}
	// printf("%s\tlen:%d\n", g_current_data.str.str, ft_strlen(g_current_data.str.str));
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


int main()
{
	// printf("%.10f\n", 50);
	// printf("%.10lf\n", 50);
	// printf("%.10Lf\n", 50);
	/**
	 * Размеры типов чисел с плавающей точкой
	 * */
	// printf("size of float: %d\n", sizeof(float));
	// printf("size of double: %d\n", sizeof(double));
	// printf("size of float: %d\n", sizeof(long double));
	double a = 255;
	double b = 25.5;
	double c = 1.5;
	printu(a);
	printu(b);
	printu(c);
	return 0;
}

// 10000000011100110000000000000000000000000000000000000000000000
// 100000000111001100000000000000000000000000000000000000000000000
// 100000000111001100000000000000000000000000000000000000000000000
