#include "main.h"

/**
  * _strcpy - copies the string pointed to by src
  * to the buffer pointed to by 'dest'
  * @dest: char type string
  * @src: char type string
  * Return: Pointer to dest
  */

char *_strcpy(char *dest, char *src)
{
	int n = -1;

	do {
		n++;
		dest[n] = src[n];
	} while (src[n] != '\0');

	return (dest);
}
