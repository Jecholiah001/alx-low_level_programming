#include "main.h"
#include <stdio.h>

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to calculate the naural square root
 * Return: the natural square root
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

int _sqrt(int n, int i);
/**
 * _sqrt - calculates natural square root
 * @n: number to calculate te square root
 * @i: iterate number
 *
 * Return: the natural square root
 */
int _sqrt(int n, int i)
{
	int _sqrt = i * i;

	if (_sqrt > n)
		return (-1);
	if (_sqrt == n)
		return (i);
	return (_sqrt(n, i + 1));
}
