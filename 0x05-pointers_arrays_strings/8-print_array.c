#include <stdio.h>
/**
  * print_array - function that prints n elements of
  * an array of integers, followed by a new line.
  * @a: the input array
  * @n: the length of the array
  * Return: 0
  */

void print_array(int *a, int n)
{
	int array_index;

	for (array_index = 0; array_index < n; array_index++)
	{
		printf("%d", a[array_index]);
		if (array_index != (n - 1))
		{
			printf(", ");
		}
	}
	putchar('\n');
}
