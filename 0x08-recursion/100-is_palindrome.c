#include "main.h"
/**
 * _strlen_recursion - length of string
 * @s:string
 * Return:int
 */
int _strlen_recursion(char *s)
{
	int a = 0;

	if (*s)
	{
		a++;
		a += _strlen_recursion(s + 1);

	}
	return (a);
}
/**
 * check_palindrome - checks to see if a string is a palindrome
 * @i:int
 * @j:int
 * @s: string
 * Return: int
 */
int check_palindrome(int a, int b, char *s)
{
	if (a >= b)
		return (1);
	else if (s[a] != s[b])
		return (0);
	else
		return (check_palindrome(a + 1, b - 1, s));
}
/**
 * is_palindrome - states if a string is a palindrome
 * @s:string
 * Return: int
 */
int is_palindrome(char *s)
{
	int a;

	a = _strlen_recursion(s) - 1;
	return (check_palindrome(0, a, s));
}
