#include "main.h"
/**
  * _strcat - function that concatenates two strings.
  * @dest: destination string pointer
  * @src: source string pointer
  * Return: pointer to destination string.
  */

char *_strcat(char *dest, char *src)
{
	int strlen, n;

	strlen = 0;
	while (dest[strlen] != '\0')
	{
		strlen++;
	}
	for (n = 0; src[n] != '\0'; n++, strlen++)
	{
		dest[strlen] = src[n];
	}
	dest[strlen] = '\0';
	return (dest);
}
