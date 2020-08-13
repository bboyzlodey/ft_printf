#include <stdio.h>
#include "libft/libft.h"
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
int print_percent(char **format, char **next_percent)
{
	int		count;

	count = 0;
	write(1, *format, *next_percent - *format);
	count += *next_percent - *format;
	*format = *next_percent;
	
	return (count);
}


int		print_before_procent(char *format)
{
	int		count;
	int len;

	count = 0;
	char *next_percent;
	next_percent = ft_strchr(format, '%');
	while (*format != '\0' && next_percent) {
		count += print_percent(&format, &next_percent);
		if (*(format + 1) == '%') {
			write(1, "%", 1);
			format++;
			count++;
		}
		else
			return (count);
		format++;
		next_percent = ft_strchr(format, '%');
	}
	len = ft_strlen(format);
	write(1, format, len);
	count += len;
	return (count);
}


int		main()
{
	char *str;
	str = strdup("ABCD");
	// int i = print_before_procent(str);
	// printf("\n%d\n", i);
	int c = printf("% 10d", 11);
	printf("\n%d\n", c);
	return (0);
}