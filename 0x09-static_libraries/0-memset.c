#include "main.h"
/**
 * _memset - func to fill a iblock of memory with a specific value
 * @s: starting address of memory to be filled
 * @b: the desired value
 * @n: number of bytes to be changed
 *
 * Return: changed array with new value for n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	int count = 0;


	for (; n > 0; count++)
	{
		s[count] = b;
		n--;
	}
	return (s);
}
