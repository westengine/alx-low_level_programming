#include "main.h"

/**
  * print_alphabet_x10 - print alphabet x10 times
  *
  * Return: void
  */

void print_alphabet_x10(void)
{
	char alph;
	int count;

	count = 0;

	while (count < 10)
	{
		for (alph = 'a'; alph <= 'z'; alph++)
		{
			_putchar(alph);
		}
		_putchar('\n');
		count++;
	}
}
