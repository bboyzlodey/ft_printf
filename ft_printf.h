//
// Created by Agrajag Sybil on 22/02/2020.
//	https://cdn.intra.42.fr/pdf/pdf/1807/ft_printf.en.pdf


#ifndef FT_PRINTF_FT_PRINTF_H
# define FT_PRINTF_FT_PRINTF_H

#include "libft/libft.h"
#include <stdarg.h>
// #include "libft/get_next_line.h"

/*
** spec: d, i, u, p, x, X, o, f, s, c, %		--- спецификаторы
** flag: -, +, #, 0, ' '  						--- флаги
** width: *, (num)								--- ширина
** prec: .(num), .*   							--- точность
** leng: (none), hh, h, l, ll, L   				--- модификаторы длины
*/

// ---------------------------------------------------------
typedef long long int t_ll_int;
typedef unsigned long long int t_ull_int;

# define H 1
# define HH 2
# define L 3
# define LL 4
# define L_BIG 5
// ---------------------------------------------------------


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
char	*ft_itoa_long_base(t_ll_int value, int base);
char	*ft_itoa_unsig_base(t_ull_int value, int base, int reg);
char	*dec_int_str(void *value); // done
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

struct	string
{
	int				len;
	void			*value;
	enum e_flags	type;
	char			*str;
}		g_string;

char	current_data[CURRENT_SIZE + 1];
char	*current_adr;
int		len;
void    *type;
int		writed;
char	*prefix;
int		prefix_len;
int		min_weight;


#endif //FT_PRINTF_FT_PRINTF_H
