#include "./ft_printf.h"

void	print_integer_part(t_long_num tmp)
{
	printf(ANSI_COLOR_YELLOW"");
	int i = 0;
	int flag = 1;

	for (i = 99; i >= 0; i--) {
		
		if (flag == 1)
		{
			if (tmp.value[i] == 0)
				continue;
			else
				flag = 0;
		}
		printf("%d", tmp.value[i]);
	}
	printf("." ANSI_COLOR_RESET);
}

void print_real_part(t_real_num real)
{
	int i = real.negative_pow - 1;
	int count = 0;
	t_long_num tmp = real.number;

	while (i >= 0 && count < g_current_data.precision)
	{
		printf("%d", tmp.value[i]);
		i--;
		count++;
	}
	printf("\n");
}

/*
**  Используется для печати больших чисел
*/
void    print_big_int(t_long_num tmp)
{
	printf(ANSI_COLOR_YELLOW"\nprint acumm: ");
	int i = 0;
	int flag = 1;

	for (i = 99; i >= 0; i--) {
		
		if (flag == 1)
		{
			if (tmp.value[i] == 0)
				continue;
			else
				flag = 0;
		}
		printf("%d", tmp.value[i]);
	}
	printf("\n" ANSI_COLOR_RESET);
}