#include "./ft_printf.h"

// char	*str(void *value)
// {
//     return(ft_strdup((char *)value));
// }

// char	*char_str(void *value)
// {
//     return (ft_strncpy(ft_strnew(1), (char *)value, 1));
// }

// char	*dec_int_str(void *value)
// {
//     t_ll_int tmp = ((t_ll_int)*value);
//     //dopisat
//     return ft_itoa_base(tmp, 10);
// }

// char	*oct_int_str(void *value)
// {
//     t_ll_int tmp = ((t_ll_int)*value);
//     return     return ft_itoa_base(tmp, 8);
// }
// char	*hex_int_str(void *value)
// {
//     t_ll_int tmp = ((t_ll_int)*value);
//     return     return ft_itoa_base(tmp, 16);
// }

// char	*dec_unint_str(void *value)
// {
//     t_ll_int tmp = ((t_ll_int)*value);
//     return ft_itoa_unsig_base(tmp, 10);
// }

char	*addr_str(void *value)
{
	size_t *tmp = (size_t)*value;
	convert_size_t_int(tmp, 16);
    return 0;
}