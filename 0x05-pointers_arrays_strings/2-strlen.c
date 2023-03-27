#include "main.h"

/**
 * _strlen - returns the lenth of a string
 * @s: String
 * Return: the length of the string
 */
int _strlen(char *S)
{
	int longi = 0;

	while(*S != '\0')

	{
		longi++;
		S++;
	}

	return (longi);
}
