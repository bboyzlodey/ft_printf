#include "../ft_printf.h"

char arr[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F', '\0'};

char	*dec_int_str(void *value)
{
	int		flag;

	flag = L;
	if (flag == LL || flag == L)
		return (ft_itoa_long_base(*(t_ll_int *)value, 10));
	else if (flag == H)
		return (ft_itoa_long_base(*(short *)value, 10));
	else if (flag == HH)
		return (ft_itoa_long_base(*(char *)value, 10));
	else
		return (ft_itoa_long_base(*(int *)value, 10));
}

char	*oct_int_str(void *value)
{
	int		flag;

	flag = L;
	if (flag == LL || flag == L)
		return (ft_itoa_unsig_base(*(t_ull_int *)value, 8, 1));
	else if (flag == H)
		return (ft_itoa_unsig_base(*(unsigned short *)value, 8, 1));
	else if (flag == HH)
		return (ft_itoa_unsig_base(*(unsigned char *)value, 8, 1));
	else
		return (ft_itoa_unsig_base(*(unsigned int *)value, 8, 1));
}

int main(int ac, char **av)
{
	t_ull_int a = -1564313;
    oct_int_str(&a);

//	int dec;
//	int delim;
//	if(ac == 3)
//	{
//		dec = atoi(av[1]);
//		delim = atoi(av[2]);
//	}
//	else
//	{
//		dec = 14;
//		delim = 16;
//	}
//	convert_int(dec, delim);
//	printf("\n");
//	printf("Stroke is: %s", g_string.str);
//	free(g_string.str);
//	g_string.str = NULL;
	// printf("%c\n", arr[atoi(av[1])]);
}