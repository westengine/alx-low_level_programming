#include "main.h"
/**
  * _strncat - function that concatenates two strings
  * @dest: destination string pointer
  * @src: source string pointer
  * @n: number of bytes to be concatenated
  * Return: pointer to destination string.
  */

char *_strncat(char *dest, char *src, int n)
{
	int strlen, i;
	/* i is a counter for n bytes of src to be concatenated */
	/* strlen = length of destination string */

	strlen = 0;
	while (dest[strlen] != '\0')
	{
		strlen++;
	}
	for (i = 0; i < n && src[i] != '\0'; i++, strlen++)
	{
		dest[strlen] = src[i];
	}
	dest[strlen] = '\0';
	return (dest);
}
