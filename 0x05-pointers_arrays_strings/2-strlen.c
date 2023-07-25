#include "main.h"

/**
  * _strlen - function that returns the length of a string
  * @s: string whose length is to be determined
  * Return: Length of the string
  */

int _strlen(char *s)
{
	int str_length = 0;

	while (s[str_length])
		str_length++;
	return (str_length);
}
