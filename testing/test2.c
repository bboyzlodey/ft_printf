//
// Created by Agrajag Sybil on 26/02/2020.
//
#include "../ft_printf.h"
/**
*
* Коммент
*
* */
int main()
{
	// printf("%.10f\n", 50.148514651);
	// printf("%.10lf\n", 50.148954654);
	// printf("%.10Lf\n", 50.14851248451);
	// printf("size of float: %hhu\n", 255);
	// int delim = 50;
	// long long int src = 214748364700;
	// printf("longst: %lld\n", src * delim);
	/**
	 * Размеры типов чисел с плавающей точкой
	 * */
	printf("size of float: %d\n", sizeof(float));
	printf("size of double: %d\n", sizeof(double));
	printf("size of float: %d\n", sizeof(long double));

}

