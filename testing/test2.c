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
static unsigned int manti_calc(unsigned int tmp)
{
    return tmp & 0x007FFFFFu;
}

typedef struct personal_float
{
	unsigned int
	sign :1,
	exponenta :8,
	mantissa :23;
} m_fl;


int main()
{
	int i = 1;


/*
** 	Тесты для проверки корректного выделения целой части float
*/
	printf(ANSI_COLOR_MAGENTA"************\n"ANSI_COLOR_RESET);
	convert_float_str(10.11);
	printf(ANSI_COLOR_YELLOW"************\n"ANSI_COLOR_RESET);
	convert_float_str(15000.11);
	printf(ANSI_COLOR_YELLOW"************\n"ANSI_COLOR_RESET);
	convert_float_str(36987.11);
	printf(ANSI_COLOR_YELLOW"************\n"ANSI_COLOR_RESET);
	convert_float_str(123796.11);
	printf(ANSI_COLOR_YELLOW"************\n"ANSI_COLOR_RESET);
	convert_float_str(1.15711);
/*
** 	Протестировано. Работает хорошо!
*/
	return 0;
}