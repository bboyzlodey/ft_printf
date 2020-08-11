#include "ft_printf.h"

#define FLOAT_SIZE ((sizeof(float) * 8))


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
    tmp = (simple_float*)malloc(sizeof(simple_float));
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

static int calcutate_real(float f, const int precision)
{
    unsigned int fi = float_to_unint(f);
    int exp = exp_calc(fi) - 127;
    unsigned int mantissa = manti_calc(fi);

    int bigr;
    return bigr;
}

/*
**  Using fo print big_int 
*/

void print_big_int(t_long_num tmp)
{
    int i = 0;
    int flag = 1;

    for (i = 99; i >= 0; i--) {
        
        if (flag == 1)
        {
            if (tmp.value[i] == 0)
                continue;
            else
                flag = 0;
        }
        printf("%d", tmp.value[i]);
    }
    printf("\n");
}
/*
** Возводит число 2 в степень
*/
t_long_num positive_pow(int exp)
{
    t_long_num tmp;
    ft_bzero(&tmp.value, sizeof(tmp.value));
    tmp.value[0] = 1;
    int i = 0;

    while (exp > 0)
    {
        i = 0;
        while (i < MAX_DIGITS)
        {
            tmp.value[i] *= 2;
            i++;
        }
        i = 0;
        while (i < MAX_DIGITS - 1)
        {
            if (tmp.value[i] >= BIG_INT_BASE)
            {
                tmp.value[i + 1] += tmp.value[i] / BIG_INT_BASE;
                tmp.value[i] %= BIG_INT_BASE;
            }
            i++;
        }
        exp--;
    }
   return tmp;
}

static int calcutate_integer(simple_float f)
{
    int current_exp = f.exponenta;
    int count_bits = 24;
    t_big_int accum;

    return 0;
}

static simple_float *init_floats(float f, simple_float toInit)
{
    unsigned int fi = float_to_unint(f);
    toInit.sign = f >= 0 ? 0 : -1;
    toInit.exponenta = exp_calc(fi) - 127;
    toInit.mantissa = manti_calc(fi) | (1 << 23);
    toInit.precision = 3;

    return &toInit;
}

void convert_float_str(float f)
{

}