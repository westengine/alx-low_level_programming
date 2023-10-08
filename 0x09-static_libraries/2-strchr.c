#include "main.h"
/**
 * _strchr - Entry point
 * @s: input
 * @c: input
 * Return: Always 0 (Success)
 */

char *_strchr(char *s, char c)
{
	int count = 0;

	for (; s[count] >= '\0'; count++)
	{
		if (s[count] == c)
			return (&s[count]);
	}
	return (0);
}
