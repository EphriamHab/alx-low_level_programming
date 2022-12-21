#include "main.h"
/**
 * _strncpy - copie a string
 * @dest:char
 *  @src:char
 * @n:int
 * Return:char
 */
char *_strncpy(char *dest, char *src, int n)
{
int j;

j = 0;
	while (j < n && *(src + j))
	{
	*(dest + j) = *(src + j);
	j++;
	}
	while (j < n)
	{
	*(dest + j) = '\0';
	j++;
	}
	return (dest);
}
