#include "main.h"
/**
 * string_toupper - Converts lowercase characters
 * @s: First pointer parameter
 * Return: a pointer containing uppercase character
 */
char *string_toupper(char *s)
{
	int i;

	for (i - 0; str[i] != '\0'; i++)
	{
		if ((str[i] >= 97) && (str[i] <= 122))
		{
			str[i] = str[i] - 32;
		}
		return (str);
	}
}
