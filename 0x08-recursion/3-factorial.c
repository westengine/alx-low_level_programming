#include "main.h"
/**
  * factorial(int n) - returns the factorial of a
  * given number
  * @n: parameter
  * Return: -1 for negative, 1 for 0
  */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
