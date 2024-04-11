#include "search_algos.h"
/**
 * binary_search - function that searches for a value in a sorted array of integers.
 * @array: pointer to search the first element of the array.
 * @size: The number of the element.
 * @value: The value to search for.
 * Return: the first index where value is located
*/

int binary_search(int *array, size_t size, int value)
{
    int index;

    index = recursive_search(array, size, value);

    if (index >= 0 && array[index] != value)
    {
        return (-1);
    }
    return (index);
}

/**
 * recursive_search - function that searches for a value in a sorted array of integers.
 * @array: pointer to search the first element of the array.
 * @size: The number of the element.
 * @value: The value to search for.
 * Return: index of number
*/
int recursive_search(int *array, size_t size, int value)
{
    int i, mid;

    if (size == 0)
    {
        return (-1);
    }

    printf("Searching in array: ");
    for (i = 0; i < (int)size; i++)
    {
        printf("%d", array[i]);
        if (i < (int)size - 1)
        {
            printf(", ");
        }
    }
    printf("\n");

    mid = (size - 1) / 2;

    if (array[mid] == value)
    {
        return (mid);
    }
    else if (array[mid] < value)
    {
        return (mid + 1 + recursive_search(array + mid + 1, size - mid - 1, value));
    }
    return (recursive_search(array, mid, value));
}
