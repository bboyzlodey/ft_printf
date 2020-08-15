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
	return a;
}

/*
**     Calculate real part of floats
*/
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
	while (current_bit >= 0)
	{
		result.number = mul_long(result.number, 10);
		if ((mantissa & (mask << current_bit)) != 0)
		{
			tmp = base_pow(5, exp);
			result.number = summ_big_int(result.number, tmp);
			ft_bzero(&tmp.value, sizeof(tmp.value));
		}       
		exp++;
		current_bit--;
		result.negative_pow++;
		result.number.digits++;
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
void    print_big_int(t_long_num tmp)
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
int     count_digits(t_long_num count)
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
	toInit->precision = g_current_data.precision;
	return toInit;
}

static void print_real_part(t_real_num real)
{
	int i = real.negative_pow - 1;
	int count = 0;
	t_long_num tmp = real.number;

	while (i >= 0 && count < g_current_data.precision)
	{
		printf("%d", tmp.value[i]);
		i--;
		count++;
	}
	printf("\n");
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
			// printf("1\n");
			f->real_part.number = summ_big_int(f->real_part.number, base_pow(10, i));
		}
		else if (i > 1 && i < 99 && (f->real_part.number.value[i - 1] == 5 && f->real_part.number.value[i] % 2 == 1))
		{
			// printf("2\n");
			f->real_part.number = summ_big_int(f->real_part.number, base_pow(10, i));
		}
		if (old_digits < f->real_part.number.digits)
		{
			// printf("fodgjdoijg\n");
			f->real_part.number.digits--;
			f->integer_part = summ_big_int(f->integer_part, base_pow(10, 0));
		}
	}
	if ((i == (old_digits - 1)) && (f->real_part.number.value[i - 1] > 5))
		f->integer_part = summ_big_int(f->integer_part, base_pow(10, 0));
	// printf("i: %d\t old_digits: %d\n", i, old_digits);
	// printf("i: %d\t", (f->real_part.number.value[i - 1]));
}

static void    print_integer_part(t_long_num tmp)
{
	printf(ANSI_COLOR_YELLOW"");
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
	printf("." ANSI_COLOR_RESET);
}

/********DELETE***********/
static int	bytes_int(int nbr)
{
	int	i;

	i = 0;
	while (nbr)
	{
		nbr = nbr / 10;
		i++;
	}
	if (nbr < 0)
		i++;
	else if (!nbr && !i)
		i++;
	return (i);
}

static void	ft_revstring(char *s1, int j, int i)
{
	char	h;

	if (!s1[i])
		return ;
	h = s1[i];
	ft_revstring(s1, j - 1, i + 1);
	s1[j] = h;
}

static int	del_int(int n)
{
	int	j;

	j = n % 10;
	if (j >= 0)
		return (j);
	return (j * (-1));
}

static char		*toa(int n)
{
	char	*new;
	int		i;

	i = 0;
	new = NULL;
	new = ft_strnew(bytes_int(n));
	if (new && n < 0)
		new[i++] = '-';
	else if (!n)
		new[i] = '0';
	while (n && new)
	{
		new[i++] = del_int(n) + '0';
		n = n / 10;
	}
	if (new && new[0] != '-')
		ft_revstring(new, ft_strlen(new) - 1, 0);
	else if (new && new[0] == '-')
		ft_revstring(new + 1, ft_strlen(new) - 2, 0);
	return (new);
}
/******DELETE********/

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
		tmp = toa(num.value[i]);
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
		str.str = ft_strjoindel(str.str, toa(tmp.value[i]));
		i--;
		count++;
	}
	while (count < precision)
	{
		str.str = ft_strjoindel(str.str, toa(0));
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