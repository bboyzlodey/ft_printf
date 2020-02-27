//
// Created by Agrajag Sybil on 22/02/2020.
//

#ifndef FT_PRINTF_FT_PRINTF_H
# define FT_PRINTF_FT_PRINTF_H

#include "./libft/libft.h"
#include "./libft/get_next_line.h"


#define	CURRENT_SIZE 150
/*
*       Functions
*/

int		ft_printf(const char *format, ...);
char	*get_decimal(int dec);
char    *get_hexodecimal(int input);

/*
*       Struct & Global variables
*/



struct	ft_printf
{
	int		*len;
	void	*type;
	char	*current;
}		current;

char	current[CURRENT_SIZE + 1];
int		len;
void    *type;
void	flag_management();


#endif //FT_PRINTF_FT_PRINTF_H
