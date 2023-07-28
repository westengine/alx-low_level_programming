#include "main.h"
/**
  * _strcmp - function that compares two strings.
  * @s1: pointer to first string
  * @s2: pointer to second string
  * Return: value less than 0 if string is less than
  * the other, value greater than 0 if string is
  * greater than the other, and 0 if strings are equal.
  */

int _strcmp(char *s1, char *s2)
{
	int counter, cmpstr;

	counter = 0;
	while (s1[counter] == s2[counter] && s1[counter] != '\0')
	{
		counter++;
	}
	cmpstr = s1[counter] - s2[counter];
	return (cmpstr);
}
