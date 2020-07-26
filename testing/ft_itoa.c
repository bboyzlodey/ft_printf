#include "../ft_printf.h"

static char number_arr[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F', '\0'};

/**
*	нужно переписать в функции которые вернут строковое представление числа для int и unsigned int
*/
void	convert_int(long long int src, int delim)
{
	int			tmp = 0;
	static int	stat;

	stat++;
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
	// printf("tmp: %d\n", tmp);
	g_current_data.str.str[g_current_data.str.len - stat] = number_arr[tmp];
	stat--;
}

void	convert_unint(long long unsigned int src, int delim)
{
	int			tmp = 0;
	static int	stat;

	stat++;
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
		g_current_data.str.str = ft_strnew(g_current_data.str.len);
	}
	// printf("tmp: %d\n", tmp);
	g_current_data.str.str[g_current_data.str.len - stat] = number_arr[tmp];
	stat--;
}

void	ft_tolowercase(char *ptr)
{
	ptr[0] = (char)ft_tolower(*ptr);
}
