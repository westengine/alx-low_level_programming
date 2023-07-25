#include "main.h"

/**
  * rev_string - function that reverses a string
  * @s: pointer pointing to the string
  * Return: 0
  */

void rev_string(char *s)
{
	int length, n, half;
	char temp;

	for (length = 0; s[length] != '\0'; length++)
	{
		n = 0;
		half = length / 2;
	}
	while (half--)
	{
		temp = s[length - n - 1];
		s[length - n - 1] = s[n];
		s[n] = temp;
		n++;
	}
}
