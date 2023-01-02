#include "main.h"

/**
 * _memset - a function that fills memory with constant bytes
 * @s: location to fill 
 * @b: char to fill location with
 * @n: the size of memory to print
 * Return: returns pointer to location filled
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *start = s;

	while (n--)
	{
		*s = b;
		s++;
	}
	return (start);
}
