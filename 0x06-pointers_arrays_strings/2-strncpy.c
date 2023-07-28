#include "main.h"
/**
  * _strncpy - function that copies a string
  * @dest: destination string pointer
  * @src: source string pointer
  * @n: number of bytes to be used
  * Return: pointer to destination string.
  */

char *_strncpy(char *dest, char *src, int n)
{
	int bytecount;

	for (bytecount = 0; bytecount < n && src[bytecount] != '\0'; bytecount++)
		dest[bytecount] = src[bytecount];

	for (; bytecount < n; bytecount++)
		dest[bytecount] = '\0';

	return (dest);
}
