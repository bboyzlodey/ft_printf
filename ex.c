#include <stdio.h>
#include "libft/libft.h"
#include "printf.h"
// int		print_before_procent(char *format)
// {
// 	int i;
	
// 	i = 0;
// 	while (format[i])
// 	{	
// 		if (format[i] == '%')
// 		{
// 			write(1, format, i);
// 			format = format + i;
// 			i++;
// 		}
// 		if (format[i] == '%' && format[i - 1] == '%') {
// 			write(1, "%", 1);
// 			format = format + 1;
// 			i++;
// 		}
// 		i++;
// 	}
// 	write(1, format, i);
// 	return (i);
// }

// int		print_percent(char *format, char *next_percent)
// {
// 	int		count;

// 	count = 0;
// 	// if (next_percent != format)
// 	// {
// 		write(1, format, next_percent - format);
// 		count += next_percent - format;
// 		format = next_percent;
// 		if (*(format + 1) == '%')
// 		{
// 			write(1, "%", 1);
// 			format++;
// 			count++;
// 		}
// 		else
// 			return (count);
// 	// }
// 	return (count);
// }


// int		print_before_procent(char *format)
// {
// 	int		count;

// 	count = 0;
// 	char *next_percent;
// 	next_percent = ft_strchr(format, '%');
// 	while (format)
// 	{
// 		if (*next_percent == '%')
// 			count += print_percent(format, next_percent);
// 		else
// 		{
// 			count = ft_strlen(format);
// 			write(1, format, count);
// 			return(count);
// 		}
// 		next_percent = ft_strchr(format, '%');
// 	}
// 	return (count);
// }


char		find_flags(char **format)
{
	// char form;

	// form = **format;
	// if (form == '#' && (*format)++ && g_current_data.skip++)
	// 	g_current_data.flags[OCTOTORP] = OCTOTORP;
	// if (form == ' ' && (*format)++ && g_current_data.skip++)
	// 	g_current_data.flags[SPACE] = SPACE;
	// if (form == '-' && (*format)++ && g_current_data.skip++)
	// 	g_current_data.flags[MINUS] = MINUS;
	// if (form == '+' && (*format)++ && g_current_data.skip++)
	// 	g_current_data.flags[PLUS] = PLUS;
	// if (form == '0' && (*format)++ && g_current_data.skip++)
	// 	g_current_data.flags[NULL_FLAG] = NULL_FLAG;
	// return (0);

	while (1)
	{
		if (**format != '+' && **format != '-' && **format != '0'\
		 && **format != ' ' && **format != '#')
			return (0);
		if (**format == '+')
			return '+';
		if (**format == '-')
			return '-';
		if (**format == '0')
			return '0';
		if (**format == ' ')
			return ' ';
		if (**format == '#')
			return '#';
		(*format)++;
	}
}

int		ft_int_len(int	num)
{	
	int count;

	count = 0;
	while ((num / 10) > 0)
	{
		num = num / 10;
		count++;
	}
	count++;
	return count;
}


int find_precision(char *prec)  // пропускает точку и возвращает что и иширина
{
	int count;

	count = 0;
	if (prec == '.')
	{
		count++;
		g_current_data.precision = ft_atoi(prec + 1);
		count = ft_int_len(g_current_data.precision);
	}
	return count;
}



int find_width(char *width) // вернет количество на которое нужно сдвинуть
{
	int count;

	g_current_data.width = ft_atoi(width);
	count = ft_int_len(g_current_data.width);
	return count;
}


int		main()
{
	char str = 'i';
	char *prec;

	prec = ft_strdup("3123.208");
	// int i = 0;
	// init_struct_data(); 
	// str = strdup("0");
	// int i = find_flags(&str);
	// printf("%c\n", find_flags(&str));
	int i = ft_int_len(123456789);
	int c = ft_atoi((prec + 1));
	// i = (str == 'd' || str == 'i' || str ==  'D' || str == 'I') ? 1 : 2;
	// int c = printf("%C\n%c\n", 'A', 'B');
	printf("%d\n", c);
	return (0);
}