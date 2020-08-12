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
/**
 * Unused function
 * */
static int calcutate_real(float f, const int precision)
{
    unsigned int fi = float_to_unint(f);
    int exp = exp_calc(fi) - 127;
    unsigned int mantissa = manti_calc(fi);
    return 0;
}


/*
**  Sum of big numbers
*/
t_long_num summ_big_int(t_long_num one, t_long_num two)
{
    int max = 0;
    max = one.digits > two.digits ? one.digits : two.digits;
    int i = 0;
    int c = 0;

    while (i <= max)
    {
        c = c + one.value[i] + two.value[i];
        one.value[i] = c % BIG_INT_BASE;
        c = c / BIG_INT_BASE;
        i++;
    }
    if (c > 0)
    {
        max = max + 1;
        one.value[max] = c;
    }
    one.digits = max;
    return one;
}
/*
**  Используется для печати больших чисел
*/
void print_big_int(t_long_num tmp)
{
    printf(ANSI_COLOR_YELLOW"print acumm: ");
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
    printf("\n" ANSI_COLOR_RESET);
}
/*
**  int count_digits(t_long_num count)
**  Считает количество десятичных цифр
*/
int count_digits(t_long_num count)
{
    int i = MAX_DIGITS - 1;
    while (count.value[i] == 0)
        i--;
    return i + 1;
}

/*
** Возводит число 2 в степень
*/
t_long_num positive_pow(int exp)
{
    t_long_num tmp;
    ft_bzero(&tmp.value, sizeof(tmp.value));
    tmp.value[0] = 1;
    tmp.digits = 1;
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
    printf("digits: %d\n", count_digits(tmp));
    tmp.digits = count_digits(tmp);
   return tmp;
}
/*
**  Возводит число base в степень exp.
**  И возвращает тип большого числа
*/
t_long_num base_pow(int exp, int base)
{
    t_long_num tmp;
    ft_bzero(&tmp.value, sizeof(tmp.value));
    tmp.value[0] = 1;
    tmp.digits = 1;
    int i = 0;

    while (exp > 0)
    {
        i = 0;
        while (i < MAX_DIGITS)
        {
            tmp.value[i] *= base;
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
    printf("digits: %d\n", count_digits(tmp));
    tmp.digits = count_digits(tmp);
    return tmp;
}

/* t_real_num negative_pow(int exp, int precision)
**  dividend -  делимое
**  Divideder - делитель
**  tmp - временное число
*/

// t_real_num negative_pow(int exp, int precision){
//     t_real_num tmp;
//     t_long_num dividend;
//     t_long_num delimeter;
    
//     tmp.negative_pow = precision + 1;
//     dividend.digits = tmp.negative_pow;
//     dividend.value[tmp.negative_pow] = 1;

//     delimeter = positive_pow(exp);
//     tmp.number = base_pow(exp, 2);
// }

int calcutate_integer(simple_float f)
{
    int current_exp = f.exponenta;
    int count_bits = 23;
    int mask = 1;
    t_long_num accum;
    ft_bzero(&accum.value, sizeof(accum.value));
    accum.digits = 0;

    while (current_exp >= 0 && count_bits)
    {
        if ((f.mantissa & (mask << count_bits)) != 0)
            accum = summ_big_int(accum, positive_pow(current_exp));
        current_exp--;
        count_bits--;
    }
    /**
     *  print_big_int(accum) -  for debug
     * */
    print_big_int(accum);
    return 0;
}

/*
**  int comp_big_int(t_long_num a, t_long_num b);
**  Компаратор. Сравнивает большие числа a и b.
*/
int comp_big_int(t_long_num a, t_long_num b)
{
    printf(ANSI_COLOR_YELLOW"*******COMPARE*******\n");
    print_big_int(a);
    print_big_int(b);
    printf("*********************\n"ANSI_COLOR_RESET);
    if (a.digits > b.digits)
        return 1;
    else if (a.digits < b.digits)
        return -1;
    return (ft_memcmp(&a, &b, a.digits * 4));
}

static simple_float init_floats(float f, simple_float toInit)
{
    unsigned int fi = float_to_unint(f);
    toInit.sign = f >= 0 ? 0 : -1;
    toInit.exponenta = exp_calc(fi) - 127;
    toInit.mantissa = manti_calc(fi) | (1 << 23);
    toInit.precision = 3;

    return toInit;
}

void convert_float_str(float f)
{
    calcutate_integer(init_floats(f, *get_structure()));
}