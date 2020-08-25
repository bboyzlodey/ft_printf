#include "../ft_printf.h"

int main()
{
	int i,j;

	i = printf("%o", 42);
	printf("\n");
	j = ft_printf("%o", 42);
	printf("\n%d\n%d\n", i , j);

	return 0;
}