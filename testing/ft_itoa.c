#include "../ft_printf.h"


// char	*ft_itoa();

// char	*convert_int(int src, int delim)
// {
// 	if(!src)
// 	{

// 	}
// }

char number_arr[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F', '\0'};

/**
*	нужно переписать в функции которые вернут строковое представление числа для int и unsigned int
*/
void	convert_int(int src, int delim)
{
	int tmp = 0;

	if(!src)
	{
		write(1, "0", 1);
		return;
	}
	tmp = src % delim;
	if (src / delim != 0)
	{
		convert_int(src / delim, delim);
	}
	write(1, &(number_arr[tmp]), 1);
}