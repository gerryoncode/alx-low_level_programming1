#include "1-string_nconcat.c"
/**
 * string_nconcat - concats first string with n bytes of second string
 * @s1: first string
 * @s2: second string
 * @n: number of bytes of second string
 * Return: pointer to concatenatd s1 and n of s2 or null.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ar;
	int l;

	while (s1
