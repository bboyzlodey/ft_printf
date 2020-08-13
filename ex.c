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

int		main()
{
	char *str;
	// init_struct_data();
	str = strdup("0");
	int i = find_flags(&str);
	printf("%c\n", find_flags(&str));
	// int c = printf("%we32423");
	// printf("\n%d\n", c);
	return (0);
}