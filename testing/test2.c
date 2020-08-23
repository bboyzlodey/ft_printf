//
// Created by Agrajag Sybil on 26/02/2020.
//
#include "../ft_printf.h"
#include <limits.h>

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
	int i, j;
	 i = printf("{%f}{%lf}{%Lf}", 1.42, 1.42, 1.42l);
	printf("\n");
	 j = ft_printf("{%f}{%lf}{%Lf}", 1.42, 1.42, 1.42l);
	printf("\n%d\n%d\n", i, j);

	i = printf("{%f}{%lf}{%Lf}", -1.42, -1.42, -1.42l);
	printf("\n");
	j = ft_printf("{%f}{%lf}{%Lf}", -1.42, -1.42, -1.42l);
	printf("\n%d\n%d\n", i, j);

	i = printf("{%f}{%lf}{%Lf}", 1444565444646.6465424242242f, 1444565444646.6465424242242, 1444565444646.6465424242242l);
	printf("\n");
	j = ft_printf("{%f}{%lf}{%Lf}", 1444565444646.6465424242242f, 1444565444646.6465424242242, 1444565444646.6465424242242l);
	printf("\n%d\n%d\n", i, j);

	i = printf("{%f}{%lf}{%Lf}", -1444565444646.6465424242242454654, -1444565444646.6465424242242454654, -1444565444646.6465424242242454654l);
	printf("\n");
	j = ft_printf("{%f}{%lf}{%Lf}", -1444565444646.6465424242242454654, -1444565444646.6465424242242454654, -1444565444646.6465424242242454654l);
	printf("\n%d\n%d\n", i, j);

	// i = printf("%15.4s", "42 is the answer");
	// printf("\n");
	// j = ft_printf("%15.4s", "42 is the answer");
	// printf("\n%d\n%d\n", i, j);

	// i = printf("%4.15s", "42");
	// printf("\n");
	// j = ft_printf("%4.15s", "42");
	// printf("\n%d\n%d\n", i, j);

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