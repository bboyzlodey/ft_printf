#include "../ft_printf.h"

// void *var;



// static void test1(int a)
// {
// 	var = &a;
// }

// static  void test2()
// {
// 	int a = 76543210;
// 	var = &a;
// }

// struct hello
// {
// 		int a;
// 		int b;
// };

// static void test3()
// {
// 	var = ft_memalloc(4);
// 	(*((int *)var)) = 214748364;
// }

// typedef enum Test{
// 	DECIMAL,
// 	OX,
// 	HEXODECIMAL
// } Test;

// char *testingc[] = {"TEST_ONE", "hello", "world"};

// void put_one(int dec), put_two(int ox), put_three(int hex);

// void(*prints[])(int) = {
// 		put_one,
// 		put_two,
// 		put_three
// };

// void put_one (int dec)
// {
// 	convert_int(dec, 10);

// }

// void put_two (int ox)
// {
// 		convert_int(ox, 8);
// }

// void put_three (int hex)
// {
// 			convert_int(hex, 16);
	
// }


// // int main(void)
// // {
// // 	Test testing;

// // 	// testing = 0;
// // 	// printf("%u\n", testing);
// // 	// printf("%s\n", testingc[testing]);
// // 	// struct hello *py;
// // 	// py = (struct hello *)ft_memalloc(1);
// // 	// py->a = 4565450;
// // 	// py->b = 807851;
// // 	// printf(">%d %d<\n", py->a, py->b);
// // 	// int a = 123456;
// // 	// var = &a;
// // 	// printf("var %d\n", *((int *)var));
// // 	// printf("size of: %d\n", sizeof(var));
// // 	// test1(98765);
// // 	// printf("second: %d\n", *((int *)var));
// // 	// test2();
// // 	// printf("third: %d\n" , *((int *)var));
// // 	// printf("third: %d\n" , *((int *)var));
// // 	// printf("third: %d\n" , *((int *)var));
// // 	// printf("third: %d\n" , *((int *)var));
// // 	// test3();
// // 	// printf("four: %d\n" , *((int *)var));
// // 	// printf("four: %d\n" , *((int *)var));
// // 	// printf("four: %d\n" , *((int *)var));
// // 	// printf("four: %d\n" , *((int *)var));
// 	// printf("size of: %lu\n", sizeof(var));
// 	// free(var);
// 	// printf("size of: %lu\n", sizeof(*var));
// 	// (*prints[0])();
// 	// (*prints[1])();
// 	// (*prints[2])();
// 	// char c = 255;
// 	// printf("%hhX", c);
	
// 	return 0;
// }

int main(int ac, char **av)
{
	int hello = -802802;
	convert_int(hello, 10);
	printf("printf: %d\n", hello);
	printf("my: %s\n", g_current_data.str.str);
	write(1, g_current_data.str.str, g_current_data.str.len);
	return 0;
}