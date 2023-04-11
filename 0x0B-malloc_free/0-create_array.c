#include <stdlib.h>
#include "main.h"

/**
 * create_array - creates an array of chars dynamically,
 * and initializes it with a specific char
 * @size: size of array
 * @c: char to fill array with
 * Return: string of chars
 */

char *create_array(unsigned int size, char c)
{
	unsigned int j;
	char *ptr;

	ptr = malloc(sizeof(char) * size);
	if (!size || !ptr)
		return (NULL);
	for (j = 0; j < size; j++)
		ptr[j] = c;
	return (ptr);
}
