#include "main.h"
/**
 * argstostr - prints args
 * @ac: argument count
 * @av: argument vector
 * Return: the args one line at a time
 */

char *argstostr(int ac, char **av)
{
	char *str;
	int count = 0, a = 0, i= 0, c = 0;

	if (ac == 0 || av == NULL)
		return (NULL);
	while (a < ac)
	{
		i = 0;
		while (av[a][i] != '\0')
		{
			count++;
			i++;
		}
		a++;
	}
	count = count + ac + 1;
	str = malloc(sizeof(char) * count);
	if (str == NULL)
	{
		return (NULL);
	}
	for (a = 0; a < ac; a++)
	{
		for (i = 0; av[a][i] != '\0'; i++)
		{
			str[c] = av[a][i];
			c++;
		}
		str[c] = '\n';
		c++;
	}
	return (str);
}
