#include "main.h"
/**
 * leet - encodes a string into a 1337
 * @s: string
 * Return: s
 */
char *leet(char *s)
{
	char t[] = {'a', 'e', 'o', 't', 'l', 'A', 'E', 'O', 'T', 'L'};
	char r[] = {4, 3, 0, 7, 1, 4, 3, 0, 7, 1};
	int i;
	int j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j =  0; t[j] != '\0'; j++)
		{
			if (s[i] == t[j])
			{
				str[i] = r[j] + '0';
			}
		}
	}
	return (s);
}
