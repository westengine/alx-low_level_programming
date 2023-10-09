#include <stdlib.h>
#include "main.h"

/**
  * *array_range - creates an array of integers
  * @min: minimum range of values stored
  * @max: maximum range of values stored and number of elements
  * Return: pointer to the new array
  */

int *array_range(int min, int max)
{
	int *p;
	int y, size;

	if (min > max)
		return (NULL);
	size = max - min + 1;

	p = malloc(sizeof(int) * size);

	if (p == NULL)
		return (NULL);

	for (y = 0; min <= max; y++)
		p[y] = min++;
	return (p);
}
