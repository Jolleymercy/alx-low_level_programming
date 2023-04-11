#include "main.h"
/**
 *_strlen - count array
 *@s: array of elements
 *Return: 1
 */

int _strlen(char *s)
{
	unsigned int j;

	j = 0;
	while (s[j] != '\0') 
	{
		j++;
	}

	return (j);
}

/**
 *_strcpy - copy arrays
 *@src: array of elements
 *@dest: dest array
 *Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int j = 0;

	while (src[j] != '\0')
	{
		dest[j] = src[j];
		j++;
	}
	dest[j] = '\0';

	return (dest);
}

/**
 *_strdup - array for prints a string
 *@str: array of elements
 *Return: pointer
 */

char *_strdup(char *str)
{
	char *dst;
	unsigned int size;

	if (str == 0)
	{
		return (NULL);
	}

	size = _strlen(str) + 1;

	dst = (char *) malloc(size * sizeof(char));

	if (dst == 0)
	{
		return (NULL);
	}

	_strcpy(dst, str);
	return (dst);
}
