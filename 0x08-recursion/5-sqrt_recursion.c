/**
 * div - checks if number multiplies by itself to give n
 * @n: first parameter
 * @d: Second parameter
 * Return: the square root of n
 */
int div(int n, int d)
{
	if (d * d == n)
	{
		return (d);
	}
	if (d * d > n)
	{
		return (-1);
	}
	return (div(n, d + 1));
}
#include "main.h"
/**
 * _sqrt_recursion: returns the natural squareroot of a number
 * @n: number to find natural log of
 * Return: squareroot of the number or -1
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (0);
	return (div(n, 1));
}
