#include "main.h"
/**
 * _strchr - Returns pointer to first occurence of a character
 * @s: POinter to a string
 * @c: Character to be searched
 * Return: Returns a pointer to found string
 */
char *_strchr(char *s, char c)
{
	int i;

	for  (i = 0; s[i] != c; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}
	return (0);
}
