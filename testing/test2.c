#include "../ft_printf.h"
#include <limits.h>
int main()
{
	int i,j;

	i = printf("{%f}{%lf}{%Lf}", 1.42, 1.42, 1.42l);
	printf("\n");
	j = ft_printf("{%f}{%lf}{%Lf}", 1.42, 1.42, 1.42l);
	printf("\n%d\n%d\n", i , j);

	return 0;
}