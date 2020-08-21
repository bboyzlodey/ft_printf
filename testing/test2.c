//
// Created by Agrajag Sybil on 26/02/2020.
//
#include "../ft_printf.h"


// static unsigned int float_to_unint(float f)
// {
// 	return *((unsigned int*) &f);
// }

typedef struct personal_float
{
	unsigned int
	sign :1,
	exponenta :8,
	mantissa :23;
} m_fl;


int main()
{
	char i;

	i = 0;
	 i = ft_printf("With f: %f\n",10.5);
	 printf("writed: %llu\n", g_ft_printf_writed_count);
	 i = printf("With f: %f\n",10.5);
	 printf("writed ft_printf: %llu\n", g_ft_printf_writed_count);
	 ft_printf("With d: %-012d\n",11);
	 ft_printf("With i:%+07i\n",11);
	 printf("With i:%+7i\n",11);
	 ft_printf("With x: %#x\n", 255);
	 ft_printf("With X: %#X\n", 255);
	 ft_printf("With o: %o\n", 564);
	ft_printf("With p: %p\n", &i);
	 printf("With p: %#X\n", 255);
	 ft_printf("With c: %c\n", 'c');
	 ft_printf("With s: %7s\n", "Hello World!");
	return 0;
}

/*
**  Хорошая фича внизу
*/
// float f = 90.001f;
	// void *file;
	// file = ft_memalloc(sizeof(f));
	// file = ft_memcpy(file, &f, sizeof(f));
	// floats[i] = *((float *)file);
	// convert_float_str(floats[i]);
	// 	printf(ANSI_COLOR_BLUE"[%.*f]\n"ANSI_COLOR_RESET,g_current_data.precision , (float) floats[i]);
	// 	write(1, "\n", 1);