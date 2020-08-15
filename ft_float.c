#include "ft_printf.h"

#define FLOAT_SIZE ((sizeof(float) * 8))

static unsigned int float_to_unint(float f)
{
	return *((unsigned int*) &f);
}

static unsigned int manti_calc(unsigned int tmp)
{
	return tmp & 0x007FFFFFu;
}

int     exp_calc(unsigned int raw)
{
	return (raw << 1) >> 24;
}

int		sign_calc(unsigned int raw)
{
	return (raw >> 31);
}

/***************************/
static simple_float *get_structure()
{
	simple_float *tmp;
	tmp = (simple_float*)malloc(sizeof(simple_float));
	return tmp;
}










static simple_float *init_floats(float f, simple_float *toInit)
{
	unsigned int fi = float_to_unint(f);
	toInit->sign = f >= 0 ? 0 : -1;
	toInit->exponenta = exp_calc(fi) - 127;
	toInit->mantissa = manti_calc(fi) | (1 << 23);
	toInit->precision = g_current_data.precision;
	return toInit;
}

static void	round_integer_part(simple_float *f)
{
	f->integer_part = summ_big_int(f->real_part.number, base_pow(10, 3));
}

static void round_simple_float(simple_float *f)
{
	int i;
	int	old_digits;

	old_digits = f->real_part.number.digits;;
	i = f->real_part.number.digits - f->precision - 1;
	if (i > 0 && i < old_digits - 1)
	{
		if (f->real_part.number.value[i - 1] > 5)
		{
			f->real_part.number = summ_big_int(f->real_part.number, base_pow(10, i));
		}
		else if (i > 1 && i < 99 && (f->real_part.number.value[i - 1] == 5 && f->real_part.number.value[i] % 2 == 1))
		{
			f->real_part.number = summ_big_int(f->real_part.number, base_pow(10, i));
		}
		if (old_digits < f->real_part.number.digits)
		{
			f->real_part.number.digits--;
			f->integer_part = summ_big_int(f->integer_part, base_pow(10, 0));
		}
	}
	if ((i == (old_digits - 1)) && (f->real_part.number.value[i - 1] > 5))
		f->integer_part = summ_big_int(f->integer_part, base_pow(10, 0));
}

t_string	integer_part_str(t_long_num num)
{
	char		*tmp;
	int			i;
	t_string	str;

	num.digits = count_digits(num);
	i = num.digits - 1;
	tmp = NULL;
	str.str = NULL;
	while (i >= 0)
	{
		tmp = ft_itoa(num.value[i]);
		str.str = ft_strjoindel(str.str, tmp);
		i--;
	}
	str.len = ft_strlen(str.str);
	// ft_printstring(str);
	return str;
}

t_string	real_part_str(t_real_num real, int precision)
{
	t_string	str;
	t_long_num	tmp;
	int			i;
	int			count;

	i = real.negative_pow - 1;
	tmp = real.number;
	str.str = ft_strdup(".");

	while (i >= 0 && count < precision)
	{
		str.str = ft_strjoindel(str.str, ft_itoa(tmp.value[i]));
		i--;
		count++;
	}
	while (count < precision)
	{
		str.str = ft_strjoindel(str.str, ft_itoa(0));
		count++;
	}
	str.len = ft_strlen(str.str);
	return str;
}

t_string	ft_concat(t_string a, t_string b)
{
	t_string	result;

	result.str = ft_strjoindel(a.str, b.str);
	result.len = a.len + b.len;
	ft_printstring(result);
	return result;
}

void	convert_float_str(float f)
{
	simple_float	*flo;
	t_string		integer;
	t_string		real;

	flo = init_floats(f, get_structure());
	flo->integer_part = calcutate_integer(flo);
	flo->real_part  = calcutate_real(flo);
	round_simple_float(flo);
	integer = integer_part_str(flo->integer_part);
	real = real_part_str(flo->real_part, g_current_data.precision);
	// ft_printstring(integer);
	// ft_printstring(real);
	g_current_data.str = ft_concat(integer, real);
}