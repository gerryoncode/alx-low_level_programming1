#include "main.h"
/**
 * print_most_numbers - print numbers from 0 to 9 except for 2 and 4
 * Return: Always 0
 */
int print_most_numbers(void)
{
	while (i < 10)
	{
		if (i != 2 && i != 4)
		{
			printf("%d", i);
		}
		i++;
	}
}
