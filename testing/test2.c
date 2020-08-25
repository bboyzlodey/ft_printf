#include "../ft_printf.h"
#include <limits.h>
int main()
{
	int i,j;

	i = printf("%f", 50.3);
	printf("\n");
	j = ft_printf("%f", 50.3);
	printf("\n%d\n%d\n", i , j);

	return 0;
}