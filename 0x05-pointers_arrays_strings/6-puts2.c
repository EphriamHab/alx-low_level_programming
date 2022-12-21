#include "main.h"

/**
 * puts2 - print  every other character of a string
 * @str:pointer char
 * return:void
 */
void puts2(char *str)
{
	int i, x;
i = 0;
x = 0;
	while (str[i++])
	{
		x++;
	}
<<<<<<< HEAD
for (i = 0; i < x; i += 2)
=======
for (j = 0; j < a; j += 2)
>>>>>>> f4c7f8d8cba2e586910712d01317926d024492f3
{
_putchar(*(str + i));
}
_putchar('\n');
}
