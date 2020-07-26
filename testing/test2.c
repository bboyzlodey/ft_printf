//
// Created by Agrajag Sybil on 26/02/2020.
//
#include <stdio.h>

int main()
{
	printf("%.10f\n", 50.148514651);
	printf("%.10lf\n", 50.148954654);
	// printf("%.10Lf\n", 5008989798987987.14851248451);
	printf("size of float: %hhu\n", 255);
	int delim = 50;
	long long int src = 214748364700;
	printf("longst: %lld\n", src * delim);

}

