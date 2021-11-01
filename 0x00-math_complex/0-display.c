#include "holberton.h"
#include <stdio.h>

/**
 *display_complex_number - a
 *@c: a
 *Return: a
 */
void display_complex_number(complex c)
{
	printf("%g", c.re);
	if (c.im)
	{
		if (c.im < 0)
			printf(" - %gi", c.im * -1.0);
		else
			printf(" + %gi", c.im);
	}
	printf("\n");
}
