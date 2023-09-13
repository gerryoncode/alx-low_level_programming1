#include "search_algos.h"

/**
 * linear_search - Linearly searches the array that matches the value
 * @arrat: Array to search through
 * @size: The size of the array
 * @value: Value to be searched for
 * Return - the index at value or -1
 * 
*/

int linear_search(int *array, size_t size, int value)
{
    size_t i;
    if (array != NULL || size > 0)
    {
        for (i = 0; i < size; i++)
        {

            printf("Value checked array[%u] = [%d]\n", (unsigned int)i, array[i]);
            if (array[i] == value)
                return i;
        }
    }
    return -1;
}
