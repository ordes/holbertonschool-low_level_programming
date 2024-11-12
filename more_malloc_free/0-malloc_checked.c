#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * create_array -entry point,creates array of chars
 * @size: -holds value for output
 * @c: -holds value for output
 * Return: (array)
 */

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
		return (NULL);

	array = malloc(size * sizeof(char));
	if (array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}
	return (array);

}
