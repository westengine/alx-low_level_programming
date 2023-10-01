#include "main.h"
int shay_palni(char *s, int i, int len);
int _strlen_recursion(char *s);

/**
  * is_palindrome - checks if a string is a palindrome
  * @s: string to reverse
  * Return: 1, otherwise 0
  */
int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (shay_palni(s, 0, _strlen_recursion(s)));
}

/**
  * _strlen_recursion - returns the length of a string
  * @s: string to calculate the length
  * Return: length of the string
  */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}

/**
  * shay_palni - checks the characters recursively
  * for palindrome
  * @s: string to check
  * @i: iterator
  * @len: length of the string
  * Return: 1 if palindrome, 0 otherwise
  */
int shay_palni(char *s, int i, int len)
{
	if (*(s + i) != *(s + len - 1))
		return (0);
	if (i >= len)
		return (1);
	return (shay_palni(s, i + 1, len - 1));
}
