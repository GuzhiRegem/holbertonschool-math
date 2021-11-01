#include "holberton.h"

/**
 * conjugate - returns the conjugate of a complex number
 * @c: complex
 * Return: conjugate
 */
complex conjugate(complex c)
{
	complex out;

	out.re = c.re;
	out.im = -c.im;
	return (out);
}
