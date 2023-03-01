#include "main.h"
/**
 * reverse_array - reverses the  array
 * @a: first parameter
 * @n: second parameter
 */
void reverse_array(int  *a, int n)
{
	int i = 0;
	int store;

	while (i < n)
	{
		container = a[i];
		a[i] = a[n - 1];
		a[n - 1] = store;
		n--;
		i++;
	}
}
