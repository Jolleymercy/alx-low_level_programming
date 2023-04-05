#include "main.h"
/**
 * _strlen_recursion - length of string
 * @s:string
 * Return:int
 */
int _strlen_recursion(char *s)
{
	int j = 0;

	if (*s)
	{
		j++;
		j += _strlen_recursion(s + 1);

	}
	return (j);
}
