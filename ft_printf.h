/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asybil <asybil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/28 20:48:40 by asybil            #+#    #+#             */
/*   Updated: 2020/07/28 20:48:40 by asybil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_FT_PRINTF_H
# define FT_PRINTF_FT_PRINTF_H
# define MAX_DIGITS 100
# define BIG_INT_BASE 10

#include "./libft/libft.h"
#include <stdarg.h>

typedef int t_big_int[MAX_DIGITS];

/*
** 	Structure for big number
*/
typedef struct long_num{
	int value[MAX_DIGITS];
	int digits;
} t_long_num;

typedef struct real_num{
	t_long_num number;
	int negative_pow;
} t_real_num;

typedef struct some_float
{
	t_long_num integer_part;
	t_real_num real_part;
	int sign;
	int exponenta;
	int mantissa;
	unsigned int precision;
	int current_bit;
	int current_exp;
}	simple_float;


/*
** spec: d, i, u, p, x, X, o, f, s, c, %		--- спецификаторы
** flag: -, +, #, 0, ' '  						--- флаги
** width: *, (num)								--- ширина
** prec: .(num), .*   							--- точность
** leng: (none), hh, h, l, ll, L   				--- модификаторы длины
*/

#define	CURRENT_SIZE 150

/*
**       Типы
*/
typedef long long int t_ll_int;
typedef long long unsigned int t_ull_int;

enum	e_flags // For flags management: 
{
	// NONE,			//without_flags
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


enum e_type{
	// NONE,
	STRING,
	CHAR,
	POINTER,
	FLOAT,
	DOUBLE,
	LONG_DOUBLE,
	INTEGERS,
	UNSIGNED,
	PERCENT
};

enum e_size{
	H,
	HH,
	L,
	LL,
	L_BIG
};

enum e_delimeters{
	OCT = 8,
	DEC = 10,
	HEX = 16
};

/**
 ** 	Структура для строки. Можно сразу выводить через write
 **/
typedef struct	s_string
{
	int				len;
	char			*str;
}				t_string;

/**
 ** 	Глобальная структура.
 ** 	type - тип (целочисленный знаковый, беззнаковый, и тд.)
 ** 	flags - флаги
 ** 	str - текущая строка, преобразованная в строку
 ** 	print - указатель на функцию, которая ничего не принимает
 ** и не возвращает
 ** 	que[10] - массив функций. Это для очереди. Итерационно будет вызываться.  
 * */
struct 				data{
	enum e_type 		type;
	enum e_flags		flags[6];
	void 				*value;
	t_string			str;
	void				(*print)(t_string);
	void				(*que[10])(void);
	void				(*pars[5])(void);
	int					precision;
}					g_current_data;

int		ft_printf(const char *format, ...);

/*
**	Функции для перевода value в строку
*/

char	*str(void *value);
char	*char_str(void *value);
char	*addr_str(void *value);
char	*dec_int_str(void *value);
char	*oct_int_str(void *value);
char	*hex_int_str(void *value);
char	*dec_unint_str(void *value);
char	*dec_float_str(void *value);

void	convert_int(long long int src, int delim);
void	convert_unint(unsigned long long  int src, int delim);

char	*ft_strjoindel(char *s1, char *s2);
void	ft_tolowercase(char *ptr);
void	ft_printstring(t_string *str);

/**
 ** Debuging
 */
void	initstructure();
void	get_binary(unsigned int src, int delim);


/**
 ** Вспомогательные функции (utils.c)
 **
 * */
char	*ft_strjoindel(char *s1, char *s2);

/**
 ** 	Deprecated
 * */
void	do_dprint(char print);
void	convert_size_t_int(size_t src, int delim);
char	*ft_itoa_base(t_ll_int value, int base);
char	*ft_itoa_unsig_base(t_ull_int value, int base, int reg);
char	*get_decimal(int dec);
char    *get_hexodecimal(int input);
void	flag_management();


t_long_num	positive_pow(int exp);
void		print_big_int(t_long_num tmp);
t_long_num	summ_big_int(t_long_num one, t_long_num two);
void		convert_float_str(float f);
t_long_num	calcutate_integer(simple_float *f);
t_real_num	negative_pow(int exp, int precision);
int			comp_big_int(t_long_num a, t_long_num b);
t_long_num	base_pow(int base, int exp);
t_long_num	mul_long(t_long_num a, int b);
void		print_binary(unsigned int c);
#endif
