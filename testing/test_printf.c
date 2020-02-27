//
// Created by Agrajag Sybil on 26/02/2020.
//
#include "../libft/libft.h"

char *get_hexodecimal(int input)
{
	int	mod;

	if (input == 0)
	{
		current[len++] = '0';
		return (current);
	}
	mod = input % 16;
	if (input / 16)
		get_hexodecimal(input / 16);
	if (mod > 9)
		current[len] = 'A' + mod - 10;
	else
		current[len] = mod + '0';
	len++;
	return (current);
}

char	*get_decimal(int dec)
{
	
}

static void initilize()
{
	ft_bzero(current, CURRENT_SIZE);
	len = 0;
}

static void print_current(void)
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
	get_hexodecimal(255);
	print_current();
	return 0;
}
