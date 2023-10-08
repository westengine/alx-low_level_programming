#include "main.h"
/**
 * _strlen - function that returns the length of a string
 * @s: string
 * Return: length
 */

int _strlen(char *s)
{
	int islength = 0;

	while (*s != '\0')
	{
		islength++;
		s++;
	}

	return (islength);
}
