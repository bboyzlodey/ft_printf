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

#include "./libft/libft.h"
#include "./libft/get_next_line.h"
#include <stdarg.h>

/*
** spec: d, i, u, p, x, X, o, f, s, c, %		--- спецификаторы
** flag: -, +, #, 0, ' '  						--- флаги
** width: *, (num)								--- ширина
** prec: .(num), .*   							--- точность
** leng: (none), hh, h, l, ll, L   				--- модификаторы длины
*/

#define	CURRENT_SIZE 150
/*
**       Functions
*/

/*
**       Типы
*/
typedef long long int t_ll_int;
typedef long long unsigned int t_ull_int;

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


enum e_type{
	STROKE,
	CHAR,
	POINTER,
	FLOAT,
	INTEGERS
};

enum e_size{
	H,

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
struct 	data{
	enum e_type 		type;
	enum e_flags		flags[10];
	void 				*value;
	t_string			str;
	void				(*print)(void);
	void				(*que[10])(void);
} 		g_current_data;

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

#endif
