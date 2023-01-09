#include "main.h"
#include <stdlib.h>

/**
 * wrdcnt - counts the number of words in a string
 * @s: string
 * Return: int of number of words
 */
int wrdcnt(char *s)
{
	int i, a = 0;

	for (i = 0; s[i]; i++)
	{
		if (s[i] == ' ')
		{
			if (s[i + 1] != ' ' && s[i + 1] != '\0')
				a++;
		}
		else if (i == 0)
			a++;
	}
	a++;
	return (a);
}

/**
 * strtow - splits a string into words
 * @str: string
 * Return: pointer to an array of strings
 */
char **strtow(char *str)
{
	int i, j, k, l, a = 0, ch = 0;
	char **x;

	if (str == NULL || *str == '\0')
		return (NULL);
	a = wrdcnt(str);
	if (a == 1)
		return (NULL);
	 x = (char **)malloc(a * sizeof(char *));
	if (x == NULL)
		return (NULL);
	x[a - 1] = NULL;
	i = 0;
	while (str[i])
	{
		if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
		{
			for (j = 1; str[i + j] != ' ' && str[i + j]; j++)
				;
			j++;
			x[ch] = (char *)malloc(j * sizeof(char));
			j--;
			if (x[ch] == NULL)
			{
				for (k = 0; k < ch; k++)
					free(x[k]);
				free(x[a - 1]);
				free(x);
				return (NULL);
			}
			for (l = 0; l < j; l++)
				x[ch][l] = str[i + l];
			x[ch][l] = '\0';
			ch++;
			i += j;
		}
		else
			i++;
	}
	return (x);
}
