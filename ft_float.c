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