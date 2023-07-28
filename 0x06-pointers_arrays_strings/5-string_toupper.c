#include "main.h"
/**
  * string_toupper - function that changes all
  * lowercase letters of a string to uppercase
  * @x: pointer to string
  * Return: pointer to uppercase string.
  */

char *string_toupper(char *x)
{
	int strlen;

	strlen = 0;
	while (x[strlen] != '\0')
	{
		if (x[strlen] >= 97 && x[strlen] <= 122)
		{
			x[strlen] = x[strlen] - 32;
		}
		strlen++;
	}
	return (x);
}
