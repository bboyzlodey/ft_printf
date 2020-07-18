#include "../ft_printf.h"

char arr[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F', '\0'};


int main(int ac, char **av)
{
	int dec;
	int delim;
	if(ac == 3)
	{
		dec = atoi(av[1]);
		delim = atoi(av[2]);
	}
	else
	{
		dec = 14;
		delim = 16;
	}
	convert_int(dec, delim);
	printf("\n");
	// printf("%c\n", arr[atoi(av[1])]);
}