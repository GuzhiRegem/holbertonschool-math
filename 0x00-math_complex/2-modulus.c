#include "holberton.h"

/**
 * modulus - returns the modulus of a complex number
 * @c: complex
 * Return: modulus
 */
double modulus(complex c)
{
	return sqrt(pow(c.re, 2) + pow(c.im, 2));
}
