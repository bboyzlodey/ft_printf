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

void print_binary(unsigned int c){
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
** 	Тесты для проверки правильного сравнивания
*/
	t_long_num tmp;
	float f = 10.00002f;
	float f1 = 10.1f;
	float f2 = 10.11f;
	float f3 = 10.000001f;
	float f4 = 45.47f;
	float test;

	g_current_data.precision = 10;

	// convert_float_str(f);
	// printf("%.*f\n",g_current_data.precision , f);
	// convert_float_str(f1);
	// printf("%.*f\n",g_current_data.precision , f1);
	// convert_float_str(f2);
	// printf("%.*f\n",g_current_data.precision , f2);
	// convert_float_str(f3);
	// printf("%.*f\n",g_current_data.precision , f3);
	test = f4;
	convert_float_str(test);
	printf("%.*f\n",g_current_data.precision , test);
		
	/*
	** 	Протестировано. Работает хорошо!
	*/
// "548024041748046875"
	return 0;
}