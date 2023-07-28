#include "main.h"
/**
  * cap_string - function that capitalizes all words of a string.
  * @s: pointer to string
  * Return: pointer to s
  */

char *cap_string(char *s)
{
	int strcount;

	/*scan through string */
	strcount = 0;
	while (s[strcount] != '\0')
	{
		/* if next character after count is char, capitalise it*/
		if (s[0] >= 97 && s[0] <= 122)
		{
			s[0] = s[0] - 32;
		}
		if (s[strcount] == ' ' || s[strcount] == '\t'
				|| s[strcount] == '\n' || s[strcount] == ',' || s[strcount] == ';'
				|| s[strcount] == '.' || s[strcount] == '!' || s[strcount] == '?'
				|| s[strcount] == '"' || s[strcount] == '(' || s[strcount] == ')'
				|| s[strcount] == '{' || s[strcount] == '}')
		{
			if (s[strcount + 1] >= 97 && s[strcount + 1] <= 122)
			{
				s[strcount + 1] = s[strcount + 1] - 32;
			}
		}
		strcount++;
	}
	return (s);
}
