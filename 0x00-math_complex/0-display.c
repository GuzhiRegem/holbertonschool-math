#include "holberton.h"
#include <stdio.h>

/**
 *display_complex_number - a
 *@c: a
 *Return: a
 */
void display_complex_number(complex c)
{
	double num = c.im;

	printf("%g", c.re);
	if (c.im)
	{
		if (num < 0)
		{
			num *= -1;
			printf(" - ");
		}
		else
			printf(" + ");
		if (num != 1)
			printf("%g", num);
		printf("i");
	}
	printf("\n");
}
