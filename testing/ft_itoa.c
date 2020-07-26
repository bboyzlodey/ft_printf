#include "../ft_printf.h"

static void add_minus(void)
{
	g_current_data.str.len++;
	g_current_data.str.str = ft_strnew(g_current_data.str.len);
	g_current_data.str.str[0] = '-';
}
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
void	convert_int(long long int src, int delim)
{
	int			tmp = 0;
	static int	stat;

	stat++;
	printf("From my func: %d\n", src);
	if(src == 0)
	{
		g_current_data.str.str = ft_strdup("0");
		g_current_data.str.len = 1;
		return;
	}
	tmp = (src % delim);
	tmp = (tmp + (tmp >> 31)) ^ (tmp >> 31);
	if (src / delim != 0)
	{
		convert_int(src / delim, delim);
	}
	else if ( src / delim == 0)
	{
		g_current_data.str.len = src > 0 ? stat : stat + 1;
		g_current_data.str.str = ft_strnew(g_current_data.str.len);
		g_current_data.str.str[0] = '-';
	}
	printf("tmp: %d\n", tmp);
	g_current_data.str.str[g_current_data.str.len - stat] = number_arr[tmp];
	stat--;
}

// void	convert_size_t_int( src, int delim)
// {
// 	int tmp = 0;
// 	static int stat;
// 	// printf("stat is: %d\n", stat);
// 	stat++;
// 	if(!src)
// 	{
// 		write(1, "0", 1);
// 		return;
// 	}
// 	tmp = src % delim;
// 	if (src / delim != 0)
// 	{
// 		convert_size_t_int(src / delim, delim);
// 	}
// 	else if ( src / delim == 0){
// 		// g_string.len = stat;
// 		// g_string.str = ft_strnew(g_string.len);
// 	}
// 	write(1, &(number_arr[tmp]), 1);
// 	// g_string.str[g_string.len - stat] = number_arr[tmp];
// 	stat--;
// }