#include "main.h"
/**
  * _puts_recursion - function that prints a string
  * followed by a new line; like puts()
  * @c: input parameter
  * Return: Always 0
  */

void _puts_recursion(char *c)
{
	if (*c)
	{
		_putchar(*c);
		_puts_recursion(c + 1);
	}
	else
		_putchar('\n');
}
