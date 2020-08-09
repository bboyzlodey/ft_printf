#include "ft_printf.h"

#define FLOAT_SIZE ((sizeof(float) * 8))
// static char number_arr[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F', '\0'};

// struct ft_float
// {
//     char    binary [sizeof(float) * 8];
//     char    *sign;
//     char    *exponent;
//     char    *mantissa;
//     int     size;
// } g_float;

void initstructure()
{
    ft_memset(g_float.binary,'0', FLOAT_SIZE);
    g_float.sign = g_float.binary;
    g_float.exponent = &g_float.binary[1];
    g_float.mantissa = g_float.exponent + 8;
    g_float.size = FLOAT_SIZE;
}



void	get_binary(unsigned int src, int delim)
{
	int			tmp = 0;
	static int	stat;

	
	tmp = src % delim;
    g_float.binary[g_float.size - stat] = tmp + '0';
    stat++;
	if (src / delim != 0)
	{
		get_binary(src / delim, delim);
	}
}

int     exp_calc(unsigned int raw)
{
    return (raw << 1) >> 24;
}

int     sign_calc(unsigned int raw)
{
    return (raw >> 31);
}
/***************************/
static simple_float *get_structure()
{
    simple_float *tmp;
    tmp = (simple_float)malloc(sizeof(simple_float));
    return tmp;
}

static unsigned int manti_calc(unsigned int tmp)
{
    return tmp & 0x007FFFFFu;
}

static unsigned int float_to_unint(float f)
{
	return *((unsigned int*) &f);
}

static unsigned int calcutate_real(float f, const int precision)
{
    unsigned int fi = float_to_unint(f);
    int exp = exp_calc(fi) - 127;
    unsigned int mantissa = manti_calc(fi);
}

static simple_float *init_floats(float f, simple_float toInit)
{
    toInit.integer_part = (int) f;
    toInit.precision = 3;
    toInit.real_part = calcutate_real(f, toInit.precision);
}

void convert_float_str(float f)
{

}