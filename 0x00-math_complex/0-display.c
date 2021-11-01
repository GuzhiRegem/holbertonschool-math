#include "holberton.h"
#include <stdio.h>

/**
 *display_complex_number - a
 *@c: a
 *Return: a
 */
void display_complex_number(complex c)
{
	char sign = '+';
	double num;

	num = c.im;
	if (c.re)
		printf("%g",c.re);
	if (c.im < 0)
	{
		sign = '-';
		num *= -1;
	}
	if (num)
	{
		if (c.re)
			printf(" %c ", sign);
		if (num != 1)
			printf("%gi",num);
		else
			printf("i");
	}
	printf("\n");
}
