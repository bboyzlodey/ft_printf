#include "ft_printf.h"


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

static void	print_stroke(char begin)
{
	len += write(1, begin, ft_strchr(begin, '%') - begin);
}

int ft_printf(const char *format, ...)
{
	return (0);
}