#include "main.h"
/**
  * _strlen_recursion - function that returns the
  * length of a string.
  * @s: string to be measured.
  * Return: the length of the string.
  */

int _strlen_recursion(char *s)
{
	int count = 0;

	if (*s)
	{
		count++;
		count += _strlen_recursion(s + 1);
	}
	return (count);
}
