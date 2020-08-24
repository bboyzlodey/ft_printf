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
	long double lo = 1444565444646.6465424242242L;
	// printf("%d\n", sizeof(long double));
//	 i = printf("s: %f", lo);
//	printf("\n");
//	 j = ft_printf("s: %f", lo);
//	printf("\n%d\n%d\n", i, j);

	i = printf("s: %Lf", lo);
	printf("\n");
	j = ft_printf("s: %Lf", lo);
	printf("\n%d\n%d\n", i, j);

	// i = printf("{%f}{%lf}{%Lf}", 1444565444646.6465424242242f, 1444565444646.6465424242242, 1444565444646.6465424242242l);
	// printf("\n");
	// j = ft_printf("{%f}{%lf}{%Lf}", 1444565444646.6465424242242f, 1444565444646.6465424242242, 1444565444646.6465424242242l);
	// printf("\n%d\n%d\n", i, j);

	// i = printf("{%f}{%lf}{%Lf}", -1444565444646.6465424242242454654, -1444565444646.6465424242242454654, -1444565444646.6465424242242454654l);
	// printf("\n");
	// j = ft_printf("{%f}{%lf}{%Lf}", -1444565444646.6465424242242454654, -1444565444646.6465424242242454654, -1444565444646.6465424242242454654l);
	// printf("\n%d\n%d\n", i, j);

	return 0;
}