#include "../ft_printf.h"

void *var;



static void test1(int a)
{
	var = &a;
}

static  void test2()
{
	int a = 76543210;
	var = &a;
}

struct hello
{
		int a;
		int b;
};

static void test3()
{
	var = ft_memalloc(4);
	(*((int *)var)) = 214748364;
}

typedef enum Test{
	TEST_ONE,
	TEST_TWO,
	TEST_FREE
} Test;

char *testingc[] = {"TEST_ONE", "hello", "world"};

void put_one(void), put_two(void), put_three(void);

void(*prints[])(void) = {
		put_one,
		put_two,
		put_three
};

void put_one ()
{
	write(1, "Hello ", 6);
}

void put_two ()
{
	write(1, "world", 5);
}

void put_three ()
{
	write(1, "!\n", 2);
}



int main(void)
{
	Test testing;

	testing = 0;
	printf("%u\n", testing);
	printf("%s\n", testingc[testing]);
	struct hello *py;
	py = (struct hello *)ft_memalloc(1);
	py->a = 4565450;
	py->b = 807851;
	printf(">%d %d<\n", py->a, py->b);
	int a = 123456;
	var = &a;
	printf("var %d\n", *((int *)var));
	printf("size of: %d\n", sizeof(var));
	test1(98765);
	printf("second: %d\n", *((int *)var));
	test2();
	printf("third: %d\n" , *((int *)var));
	printf("third: %d\n" , *((int *)var));
	printf("third: %d\n" , *((int *)var));
	printf("third: %d\n" , *((int *)var));
	test3();
	printf("four: %d\n" , *((int *)var));
	printf("four: %d\n" , *((int *)var));
	printf("four: %d\n" , *((int *)var));
	printf("four: %d\n" , *((int *)var));
	printf("size of: %lu\n", sizeof(var));
	free(var);
	printf("size of: %lu\n", sizeof(*var));
	(*prints[0])();
	(*prints[1])();
	(*prints[2])();
	char c = 255;
	printf("%hhX", c);
	return 0;
}