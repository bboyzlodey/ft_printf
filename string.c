#include "./ft_printf.h"

char	*str(void *value)
{
    return(ft_strdup((char *)value));
}

char	*char_str(void *value)
{
    return (ft_strncpy(ft_strnew(1), (char *)value, 1));
}

char	*dec_int_str(void *value)
{
    int tmp = ((int)*value);
    //dopisat

}