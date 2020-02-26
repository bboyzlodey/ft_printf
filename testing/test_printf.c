//
// Created by Agrajag Sybil on 26/02/2020.
//
#include "../libft/libft.h"

#define CURRENT_SIZE 150

char	current[CURRENT_SIZE + 1];
int		len;
//int		len_one;

char *get_hexodecimal(int input)
{
	int	mod;

	if (input == 0)
		current[len++] = '0';
	while(input)
	{
		mod = input % 16;
		if (mod > 9)
			current[len] = 'A' + mod - 10;
		else
			current[len] = mod + '0';
		len++;
		input /= 16;
	}
	return (current);
}

static void initilize()
{
	ft_bzero(current, CURRENT_SIZE);
	len = 0;
}

static print_current(void)
{
	write(1, current, len);
	ft_strclr(current);
	len = 0;
}

int main()
{
	char c = 255;
	printf("%X\n", c);
	printf("%hhX\n", c);
	printf("%X\n", (unsigned char)c);
//	printf("%n\n", c);
//	printf("%hhn\n", c);
	get_hexodecimal(254);
	print_current();
	return 0;
}
