#include "main.h"
/**
  * is_prime_number - function that returns 1 if the
  * input integer is a prime num, otherwise return 0.
  * @n: parameter to be inputed as integer
  * Return: 1 if n is prime num, 0 otherwise.
  */

int is_prime(int n, int i);

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (is_prime(n, n - 1))

}
