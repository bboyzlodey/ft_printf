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
	char i;

	i = 0;
	 ft_printf("With f: %f\n",10.5);
	 ft_printf("With d: %-012d\n",11);
	 ft_printf("With i: %i\n",11);
	 ft_printf("With x: %x\n", 564);
	 ft_printf("With X: %X\n", 564);
	 ft_printf("With o: %o\n", 564);
	ft_printf("With p: %p\n", &i);
	 printf("With p: %p\n", &i);
	 ft_printf("With c: %c\n", 'c');
	 ft_printf("With s: %60s\n", "Hello World!");
	return 0;
}

/*
**  Хорошая фича внизу
*/
// float f = 90.001f;
	// void *file;
	// file = ft_memalloc(sizeof(f));
	// file = ft_memcpy(file, &f, sizeof(f));
	// floats[i] = *((float *)file);
	// convert_float_str(floats[i]);
	// 	printf(ANSI_COLOR_BLUE"[%.*f]\n"ANSI_COLOR_RESET,g_current_data.precision , (float) floats[i]);
	// 	write(1, "\n", 1);