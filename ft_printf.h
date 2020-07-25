//
// Created by Agrajag Sybil on 22/02/2020.
//	https://cdn.intra.42.fr/pdf/pdf/1807/ft_printf.en.pdf

#ifndef FT_PRINTF_FT_PRINTF_H
# define FT_PRINTF_FT_PRINTF_H

#include "./libft/libft.h"
#include "./libft/get_next_line.h"

/*
** spec: d, i, u, p, x, X, o, f, s, c, %		--- спецификаторы
** flag: -, +, #, 0, ' '  						--- флаги
** width: *, (num)								--- ширина
** prec: .(num), .*   							--- точность
** leng: (none), hh, h, l, ll, L   				--- модификаторы длины
*/

#define	CURRENT_SIZE 150
/*
*       Functions
*/

int		ft_printf(const char *format, ...);
char	*get_decimal(int dec);
char    *get_hexodecimal(int input);
void	flag_management();

/*
*	Функции для перевода value в строку
*/

typedef long long int t_ll_int;
typedef long long unsigned int t_ull_int;

char	*str(void *value);
char	*char_str(void *value);
char	*addr_str(void *value);
char	*dec_int_str(void *value)
{
    if (flag = 'l') // h(short) hh l ll
        return (ft_itoa_long_base((long int)(*value), 10));
    else
        return (ft_itoa_long_base((int)(*value), 10));
}
char	*oct_int_str(void *value);
char	*hex_int_str(void *value);
char	*dec_unint_str(void *value);
char	*dec_float_str(void *value);

void	convert_int(int src, int delim);

/*
**       Struct & Global variables
*/

enum	e_flags // For flags management: 
{
	NONE,			//without_flags
	OCTOTORP,		//	'#'
	/*
	**	При выводе чисел в формате перед числом будет указываться особенность формата
	*/
	SPACE,			//	' '
	/*
	**	Символ + имеет больший приоритет, чем пробел. Используется только для десятичных числовых значений.
	**
	**	В отсутсвие: вывод может начинаться с цифры.
	**
	*/
	MINUS,			//	'-'
	/*
	**	В отсутсвие: по правому
	*/
	PLUS,			//	'+'
	/*
	**	В отсутсвие: только для отрицательных чисел
	*/
	NULL_FLAG		//	'0'
	/*
	**	Используется для типов d, i, o, u, x, X, a, A, e, E, f, F, g, G.
	**	Для типов d, i, o, u, x, X, если точность указана, этот флаг игнорируется.
	**	Для остальных типов поведение не определено.
	**
	**	В отсутсвие: дополнять пробелами
	**
	*/
}	g_flags;

struct	ft_printf
{
	int		*len;
	void	*type;
	char	*current_data;
	void	(*f)(void);
}		current;


enum e_type{
	STROKE,
	CHAR,
	FLOAT,
	INTEGERS
};

typedef struct	s_string
{
	int				len;
	char			*str;
}				t_string;

struct 	data{
	enum e_type 		type;
	enum e_flags[10]	flags;
	void 				*value;
	t_string			str;
	// void				(*print)(void);
	char				
	void				(*que[10])(void);
} 		g_current_data;

int g_printed = 0;

char	current_data[CURRENT_SIZE + 1];
char	*current_adr;
int		len;
void    *type;
int		writed;
char	*prefix;
int		prefix_len;
int		min_weight;


#endif //FT_PRINTF_FT_PRINTF_H
