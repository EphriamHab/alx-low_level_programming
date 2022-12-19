#include "main.h"

/**
 * puts2 - print  every other character of a string
 * @str:pointer char
 * return:void
 */
void puts2(char *str)
{
	int j, a;
j = 0;
a = 0;
	while (str[j++])
	{
		a++;
	}
for (j = 0; j < x; j += 2)
{
_putchar(*(str + j));
}
_putchar('\n');
}
