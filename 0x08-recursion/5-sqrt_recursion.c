#include "main.h"
/**
  * _sqrt_recursion - return the natural square root
  * of a number.
  * @n: number whose square root is to be calculated
  * Return: the resulting square root
  */

int natural_sqrt_recursion(int n, int i);

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (natural_sqrt_recursion(n, 0));
}

/**
  * natural_sqrt_recursion - recurses to find the
  * natural square root of a number
  * @n: number whose square root is to be calculated
  * @i: iterator
  * Return: the resulting square root
  */
int natural_sqrt_recursion(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (natural_sqrt_recursion(n, i + 1));
}
