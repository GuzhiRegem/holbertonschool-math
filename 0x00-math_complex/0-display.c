#include "holberton.h"
#include <stdio.h>

/**
 *display_complex_number - a
 *@c: a
 *Return: a
 */
void display_complex_number(complex c)
{
	printf("%f", c.re);
	if (c.im)
	{
		if (c.im < 0)
			printf(" - %fi", c.im);
		else
			printf(" + %fi", c.im);
	}
	printf("\n");
}
