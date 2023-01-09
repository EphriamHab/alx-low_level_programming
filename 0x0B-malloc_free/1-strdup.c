#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Returns a pointer to a newly-allocated space in memory
 *           containing a copy of the string given as parameter.
 * @str:string
 *
 * Return:char
 */
char *_strdup(char *str)
{
	char *s;
	int j, b = 0;

	if (str == NULL)
		return (NULL);

	for (j = 0; str[j]; j++)
		b++;

	s = malloc(sizeof(char) * (b + 1));

	if (s == NULL)
		return (NULL);

	for (j = 0; str[j]; j++)
		s[j] = str[j];

	s[b] = '\0';

	return (s);
}
