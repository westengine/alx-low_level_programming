#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
  * main - generates random valid passwords for 101-crackme
  * Return: 0 (Success)
  */

int main(void)
{
	int sum;
	char cha;

	srand(time(NULL));
	sum = 0;
	while (sum <= 2645)
	{
		cha = rand() % 128;
		sum += cha;
		putchar (cha);
	}
	putchar(2772 - sum);

	return (0);
}
