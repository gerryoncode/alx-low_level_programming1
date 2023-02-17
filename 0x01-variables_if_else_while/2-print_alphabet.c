#include <stdio.h>
/**
 * main - Prints lowecas ealphabets
 * putchar - Prints a single character at a time.
 * Return: 0 for success
 */
int main(void)
{
	int c = 'a';

	while (c <= 'z')
	{
		putchar(c++);
	}
	putchar("\n");
	return (0);
}
