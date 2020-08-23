//
// Created by Agrajag Sybil on 26/02/2020.
//
#include "../ft_printf.h"


// static unsigned int float_to_unint(float f)
// {
// 	return *((unsigned int*) &f);
// }

typedef struct personal_float
{
	unsigned int
	sign :1,
	exponenta :8,
	mantissa :23;
} m_fl;


int main()
{
	// int i;

	// i = 123;
	//  i = ft_printf("%lx", 4294967296l);
	// printf("\n%d\n", i);
	// printf("%lx", 4294967296l);
//# 0125 (int)
//	ft_printf("%0+5d", 42);
//	1. (    7) -->++00042<--
//			2. (    5) -->+0042<--
//
//# 0127 (int)
//	ft_printf("%05d", -42);
//	1. (    7) -->--00042<--
//			2. (    5) -->-0042<--
//
//# 0128 (int)
//	ft_printf("%0+5d", -42);
//	1. (    7) -->--00042<--
//			2. (    5) -->-0042<--
	int i = printf("%+d", 0);
	printf("\n");
	int j = ft_printf("%+d", 0);
	printf("\n%d\n%d\n", i, j);
//	i = printf("%05d", -42);
//	printf("\n");
//	j = ft_printf("%0+5d", -42);
//	printf("\n%d\n%d\n", i, j);
//	i = printf("%05d", -42);
//	printf("\n");
//	j = ft_printf("%0+5d", -42);
//	printf("\n%d\n%d\n", i, j);
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