#include <stdio.h>
/**
 * main - Prints the aphabet in uppercase and lowercase
 * Return: Always zero
 */
int main(void)
{
	char c = 'a';
	char n = 'A';

	while (c <= 'z')
	{
		putchar(c++);
	}
	while (n <= 'Z')
	{
		putchar(n++);
	}
	putchar('\n');
	return (0);
}
