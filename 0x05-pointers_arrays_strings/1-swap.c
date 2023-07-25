#include "main.h"

/**
  * swap_int - function that swaps the values of two integers.
  * @a: swaps and stores the address of b
  * @b: swaps and stores the address of a
  * Return: 0
  */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *b;
	*b = *a;
	*a = temp;
}
