#include "../ft_printf.h"
#include <limits.h>
int main()
{
	int i,j;

	i = printf("%#o", 0);
	printf("\n");
	j = ft_printf("%#o", 0);
	printf("\n%d\n%d\n", i , j);

	return 0;
}