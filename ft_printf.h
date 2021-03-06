/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsabina <jsabina@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/28 20:48:40 by asybil            #+#    #+#             */
/*   Updated: 2020/08/25 15:58:56 by jsabina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_FT_PRINTF_H
# define FT_PRINTF_FT_PRINTF_H
# define MAX_DIGITS 100
# define BIG_INT_BASE 10
# define DEFAULT_PRECISION_FLOAT 6
# define MAX_FUNC_QUE_SIZE 10
# define CURRENT_SIZE 150
# define DONE_PARS 1
# define COUNT_FLAGS 6
# define COUNT_TYPES 9
# define QUE_COUNT 10

# include "./libft/libft.h"
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include <stdarg.h>
# include <math.h>

typedef int				t_big_int[MAX_DIGITS];

typedef struct			s_long_num{
	int value[MAX_DIGITS];
	int digits;
}						t_long_num;

typedef struct			s_real_num{
	t_long_num	number;
	int			negative_pow;
}						t_real_num;

typedef struct			s_some_float
{
	t_long_num		integer_part;
	t_real_num		real_part;
	int				sign;
	int				exponenta;
	int				mantissa;
	unsigned int	precision;
	int				current_bit;
	int				current_exp;
}						t_simple_float;

typedef struct			s_some_double
{
	t_long_num				integer_part;
	t_real_num				real_part;
	int						sign;
	int						exponenta;
	unsigned long long int	mantissa;
	unsigned int			precision;
	int						current_bit;
	int						current_exp;
}						t_simple_double;

/*
** spec: d, i, u, p, x, X, o, f, s, c, %		--- спецификаторы
** flag: -, +, #, 0, ' '  						--- флаги
** width: *, (num)								--- ширина
** prec: .(num), .*   							--- точность
** leng: (none), hh, h, l, ll, L   				--- модификаторы длины
*/

unsigned long long int g_ft_printf_writed_count;
typedef long long int			t_ll_int;
typedef long long unsigned int	t_ull_int;

enum	e_flags
{
	OCTOTORP = 1,
	SPACE,
	MINUS,
	PLUS,
	NULL_FLAG
}		g_flags;

enum	e_type{
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

enum	e_specs{
	D,
	I,
	U,
	S,
	C,
	P,
	X,
	O,
	F
};

enum	e_conversions{
	CALCULATION,
	PRECISION,
	FLAG_CONVERS,
	WIDTH_CONV,
};

enum	e_size{
	H,
	HH,
	L,
	LL,
	L_BIG
};

enum	e_delimeters{
	OCT = 8,
	DEC = 10,
	HEX = 16
};

/*
**		String Structure
*/
typedef struct			s_string
{
	int			len;
	char		*str;
}						t_string;

struct					s_data{
	enum e_type			type;
	enum e_flags		flags[6];
	enum e_delimeters	delimeters;
	enum e_specs		spec;
	enum e_size			size;
	void				*value;
	t_string			str;
	void				(*que[MAX_FUNC_QUE_SIZE])(void);
	va_list				list;
	int					(*pars[5])(void);
	int					precision;
	int					width;
	int					upper;
	char				sign;
}						g_current_data;

void					(*g_flags_convertions[COUNT_TYPES])(void);

int						ft_printf(const char *format, ...);
void					ft_tolowercase(char *ptr);
char					*ft_strjoindel(char *s1, char *s2);
void					ft_printstring(t_string str);

/*
** Debuging
*/

void					initstructure();
char					*ft_strjoindel(char *s1, char *s2);
void					global_free(void);
t_long_num				positive_pow(int exp);
t_long_num				summ_big_int(t_long_num one, t_long_num two);
t_long_num				calcutate_integer(t_simple_float *f);
t_real_num				calcutate_real(t_simple_float *fl);
t_real_num				negative_pow(int exp, int precision);
int						comp_big_int(t_long_num a, t_long_num b);
t_long_num				base_pow(int base, int exp);
t_long_num				mul_long(t_long_num a, int b);
t_string				integer_part_str(t_long_num num);
t_string				real_part_str(t_real_num real, int precision);
t_string				ft_concat(t_string a, t_string b);
t_string				repeat_char(char a, size_t size);
int						count_digits(t_long_num count);
void					float_calculate(void);
void					str_calculate(void);
void					char_calculate(void);
void					pointer_calculate(void);
void					calculate(void);
void					integer_calculate(void);
void					convert_int(long long int src, int delim);
void					convert_unint(unsigned long long int src, int delim);
void					convert_size_t_int(size_t src, int delim);
void					precision_management(void);
void					width_management(void);
void					init_size_management(void);
void					size_management_float(void);
void					size_management_integers(void);
void					size_management_unsigned(void);
void					size_management_ponter(void);
void					size_management_string(void);
void					size_management_char(void);
void					flag_management(void);
void					flag_management_d(void);
void					flag_management_i(void);
void					flag_management_o(void);
void					flag_management_x(void);
void					flag_management_f(void);
void					init_flags_convertions(void);
void					remove_ignored_flags(void);
void					set_func_que(void);
void					iterate_func_que(void);
long double				ft_pow(long double n, int pow);
int						ft_abs(int n);

/*
** Parsing functions
*/
int						find_flags(char *format);
int						find_width(char *width);
int						find_size(char *format);
int						find_type(char *f);
int						find_precision(char *prec);
void					validate_precision(void);
int						print_before_procent(char *format);
t_long_num				calcutate_integer_double(t_simple_double *f);
void					round_simple_double(t_simple_double *f);
t_real_num				calcutate_real_double(t_simple_double *fl);
void					convert_double_str(double f);

/*
**	Long double
*/
void					convert_l_double_str(long double f);

char					*ft_strrealloc(char **ptr, size_t size);
char					*ft_strappend_xx(char **dst, char **s2);
char					*ft_strappend_xo(char **dst, char *s2);
char					*ft_strappend_ox(char *s2, char **dst);
int						ft_numlen_base_unsigned(unsigned long long int n, \
size_t base);
char					*ft_itoa_base_unsigned(unsigned long long int n, int b);
int						ft_abs(int n);
long double				ft_pow(long double n, int pow);
long double				ft_ldmod(long double x, long double y);
int						ft_round_half_to_even(long double nbr, int precision);
long double				ft_dtoa_round(long double nbr, int precision);
char					*ft_dtoa(long double d, size_t p, size_t base);
void					convert_l_double_str(long double f);
unsigned long long int	double_to_unint(double f);
unsigned long long int	manti_calc_double(unsigned long long int tmp);
int						exp_calc_double(unsigned long long int raw);
t_simple_double			*get_structure_double(void);

#endif
