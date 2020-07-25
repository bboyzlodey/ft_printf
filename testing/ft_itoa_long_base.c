#include "../ft_printf.h"

static int		ft_intlen_base(t_ll_int value, int base)
{
    int i;

    i = 1;
    if (value < 0 && base == 10)
        i++;
    while (value /= base)
        i++;
    return (i);
}

static char		print_nbr(int value)
{
    char	*str;
    char	c;

    value = value < 0 ? value * -1 : value;
    str = ft_strdup("0123456789ABCDEF");
    c = str[value];
    ft_strdel(&str);
    return (c);
}

char			*ft_itoa_base(t_ll_int value, int base)
{
    char	*str;
    int		count;

    count = ft_intlen_base(value, base);
    str = malloc(sizeof(char) * (count + 1));
    str[count] = '\0';
    while ((value >= base && value > 0)
           || (value <= (base * -1) && value < 0))
    {
        str[--count] = print_nbr(value % base);
        value /= base;
    }
    str[--count] = print_nbr(value % base);
    if (count)
        str[--count] = '-';
    return (str);
}
