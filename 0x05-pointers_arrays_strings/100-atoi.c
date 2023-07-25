#include "main.h"

/**
  * _atoi - function that converts a string
  * to an integer
  * @s: input string
  * Return: integer
  */

int _atoi(char *s)
{
	unsigned int count = 0, size = 0, oi = 0, product = 1, max = 1, i;

	while (*(s + count) != '\0')
	{
		if (size > 0 && (*(s + count) < '0' || *(s + count) > '9'))
			break;
		if (*(s + count) == '-')
			product *= -1;

		if ((*(s + count) >= '0') && (*(s + count) <= '9'))
		{
			if (size > 0)
				max *= 10;
			size++;
		}
		count++;
	}

	for (i = count - size; i < count; i++)
	{
		oi = oi + ((*(s + i) - 48) * max);
		max /= 10;
	}
	return (oi * product);
}

