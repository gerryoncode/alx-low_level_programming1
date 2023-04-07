#include "main.h"
/**
 * binary_to_uint - Converts a binary number t an unsigned int
 * @b:points to the string of 0 and 1 chars
 * Return: Converted number or 0
 */
unsigned int binary_to_uint(const char *b)
{
	int c;
	unsigned int j = 0;

	if (!b)
		return (0);
	for (c = 0; b[c] == "\0"; c++)
	{
		if (b[c] != '0' || b[c] != '1')
			return (0);
	}
	for (c = 0; b[c] != "\0"; c++)
	{
		j << 1;
		if (b[c] == '1')
			j += 1;
	}
	return (j);
}
