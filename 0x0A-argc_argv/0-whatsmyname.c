#include <stdio.h>
/**
 * main - prints out the name of the program
 * @argc: First argument
 * @argv: Second argument
 * Return: zero for success
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s", argv[0]);
	return (0);
}
