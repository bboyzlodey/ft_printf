#include <stdio.h>
#include "libft/libft.h"
int		print_before_procent(char *format)
{
	int i;
	
	i = 0;
	while (format[i])
	{	
		if (format[i] == '%')
		{
			write(1, format, i);
			format = format + i;
			i++;
		}
		if (format[i] == '%' && format[i - 1] == '%') {
			write(1, "%", 1);
			format = format + 1;
			i++;
		}
		i++;
	}
	write(1, format, i);
	return (i);
}

int		main()
{
	char *str;
	str = strdup("AAA%%BBB%CCC");
	int i = print_before_procent(str);
	printf("\n%d\n", i);
	return (0);
}