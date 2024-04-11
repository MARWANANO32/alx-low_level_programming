#include "search_algos.h"
/**
 * linear_search - function that searches for a value in an array of integers.
 * @array: pointer to search the first element of the array.
 * @size: The number of the element.
 * @value: The value to search for.
 * Return: the first index where value is located
 */

int linear_search(int *array, size_t size, int value)
{
    int i;

    if (array == NULL)
    {
        return (-1);
    }

    for (i = 0; i < (int)size; i++)
    {
        printf("Value checked array[%d] = [%d]\n", i, array[i]);
        if (value == array[i])
        {
            return (i);
        }
    }
    return(-1);
}
