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

t_long_num mul_long(t_long_num a, int b)
{
    int c, i;

    c = 0;
    i = 0;
    while (i < a.digits)
    {
        a.value[i] = a.value[i] * b + c;
        c = a.value[i] / 10;
        a.value[i] = a.value[i] % 10;
        i++;
    }
    while (c > 0)
    {
        a.digits++;
        a.value[a.digits - 1] = c % 10;
        c = c / 10;
    }
    // print_big_int(a);
    return a;
}

/**
 * used function
 * */
static t_real_num calcutate_real(simple_float *fl)
{
    t_real_num result;
    int exp = (fl->current_exp) * (-1);
    int current_bit = fl->current_bit;
    int mask = 1;
    int mantissa = (fl->mantissa);
    t_long_num tmp;
    result.negative_pow = 0;
    result.number.digits = 0;
    ft_bzero(&result.number.value, sizeof(result.number.value));

    printf(ANSI_COLOR_BLUE"exp: %d\n"ANSI_COLOR_RESET, exp);
    printf(ANSI_COLOR_BLUE"bits: %d\n"ANSI_COLOR_RESET, current_bit);
    int i = 1;
    while (current_bit >= 0)
    {
        printf("number of bit: %d\t", i);
        result.number = mul_long(result.number, 10);
        print_big_int(result.number);
        if ((mantissa & (mask << current_bit)) != 0)
        {
            printf("1\ttrue\n");
            tmp = base_pow(5, exp);
            print_big_int(tmp);
            print_big_int(result.number);
            result.number = summ_big_int(result.number, tmp);
            print_big_int(result.number);
            ft_bzero(&tmp.value, sizeof(tmp.value));
        }
        else
        {
            printf("0\tfalse\n");
        }        
        exp++;
        current_bit--;
        result.negative_pow++;
        result.number.digits++;
        i++;
    }
    return result;
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
    printf(ANSI_COLOR_YELLOW"\nprint acumm: ");
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
    // printf("digits: %d\n", count_digits(tmp));
    tmp.digits = count_digits(tmp);
   return tmp;
}
/*
**  Возводит число base в степень exp.
**  И возвращает тип большого числа
*/
t_long_num base_pow(int base,int exp) 
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
    // printf("digits: %d\n", count_digits(tmp));
    tmp.digits = count_digits(tmp);
    return tmp;
}

/* t_real_num negative_pow(int exp, int precision)
**  dividend -  делимое
**  Divideder - делитель
**  tmp - временное число
*/
t_real_num negative_pow(int exp, int precision){
    t_real_num tmp;
    t_long_num dividend;
    t_long_num delimeter;
    
    tmp.negative_pow = precision + 1;
    dividend.digits = tmp.negative_pow;
    dividend.value[tmp.negative_pow] = 1;

    delimeter = positive_pow(exp);
    tmp.number = base_pow(exp, 2);
    
    return tmp;
}

// t_long_num  division_big_int(t_long_num a, t_long_num b)
// {
//     t_long_num  up;
//     t_long_num  down;
//     t_long_num  result;
// }
t_long_num calcutate_integer(simple_float *f)
{
    int current_exp = f->exponenta;
    int count_bits = 23;
    int mask = 1;
    t_long_num accum;
    ft_bzero(&accum.value, sizeof(accum.value));
    accum.digits = 0;

    while (current_exp >= 0 && count_bits)
    {
        if ((f->mantissa & (mask << count_bits)) != 0)
            accum = summ_big_int(accum, positive_pow(current_exp));
        current_exp--;
        count_bits--;
    }
    /**
     *  print_big_int(accum) -  for debug
     * */
    // print_big_int(accum);
    f->current_bit = count_bits;
    f->current_exp = current_exp;
    return accum;
}

/*
**  int comp_big_int(t_long_num a, t_long_num b);
**  Компаратор. Сравнивает большие числа a и b.
*/
int comp_big_int(t_long_num a, t_long_num b)
{
    int i;

    i = a.digits - 1;
    // printf(ANSI_COLOR_YELLOW"*******COMPARE*******\n");
    // print_big_int(a);
    // print_big_int(b);
    // printf("*********************\n"ANSI_COLOR_RESET);
    if (a.digits > b.digits)
        return 1;
    else if (a.digits < b.digits)
        return -1;
    while (i >= 0)
    {
        if (a.value[i] > b.value[i])
            return 1;
        else if (a.value[i] < b.value[i])
            return -1;
        i--;
    }
    return 0;    
}

static simple_float *init_floats(float f, simple_float *toInit)
{
    unsigned int fi = float_to_unint(f);
    toInit->sign = f >= 0 ? 0 : -1;
    toInit->exponenta = exp_calc(fi) - 127;
    toInit->mantissa = manti_calc(fi) | (1 << 23);
    toInit->precision = 3;
    return toInit;
}

static void print_real_part(t_real_num real)
{
    int i;

    i = real.negative_pow - real.number.digits;
    while (i > 0)
    {
        printf("0");
        i--;
    }
    print_big_int(real.number);
}

void convert_float_str(float f)
{
    simple_float *flo;
    t_real_num real;
    t_long_num integ;

    flo = init_floats(f, get_structure());
    integ = calcutate_integer(flo);
    print_big_int(integ);
    printf(".");
    real = calcutate_real(flo);
    print_real_part(real);
    printf("\n");
}