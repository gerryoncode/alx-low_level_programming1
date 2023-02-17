#include <stdin.h>
/**
 * main - Print the alphabet in lowercase and then new line
 * Return: Always 0
 */
int main(void)
{
	int c = 'a';

	while (c <= 'z')
	{
		putchar(c++);
	}
	putchar('\n');
	return (0);
}
