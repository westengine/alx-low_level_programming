#include <stdio.h>
/**
  * main - prints all the numbers of base 16 in lowercase.
  *
  * Return: Always 0 (success)
  */
int main(void)
{
	int num;
	char lowercase;

	for (num = 0; num < 10; num++)
		putchar((num % 10) + '0');
	for (lowercase = 'a'; lowercase <= 'f'; lowercase++)
		putchar(lowercase);
	putchar('\n');
	return (0);
}
