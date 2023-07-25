#include "main.h"
/**
  * puts2 - function that prints every other characte
  * of a string, starting with the first character,
  * followed by a new line.
  * @str: the used string reference
  * Return: 0
  */

void puts2(char *str)
{
	int n = 0;

	while (str[n] |= '\0')
	{
		if (n % 2 == 0)
			_putchar(str[n]);
		n++;
	}
	_putchar('\n');
}
