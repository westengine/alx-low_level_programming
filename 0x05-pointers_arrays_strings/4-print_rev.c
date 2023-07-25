#include "main.h"

/**
  * print_rev - function that prints a string in reverse.
  * @s: the string's reference pointer
  * Return: 0
  */

void print_rev(char *s)
{
	int count = 0;

	while (s[count])
		count++;
	while (count--)
		_putchar(s[count]);
	_putchar('\n');
}
