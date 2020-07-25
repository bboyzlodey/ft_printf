#include "../ft_printf.h"

char arr[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F', '\0'};


int main(int ac, char **av)
{
	char n[] = "hello";
	addr_str(n);
	printf("\n%p\n", n);
	return 0;
}