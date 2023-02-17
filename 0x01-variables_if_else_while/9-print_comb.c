#include <stdio.h>
/**
 * main - Entry point
 * Return: Alway 0
 */
int main(void)
{
	int c = 0;

	while (c < 9)
	{
		putchar((c % 10) + ',');
	}
	putchar((9 % 10));
}
