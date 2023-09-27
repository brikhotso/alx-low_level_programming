#include "main.h"

/**
 * _strlen_recursion - function returns length of a string
 * @s: string
 *
 * Return: length of a string
 */
int _strlen_recursion(char *s)
{
	int strlen = 0;

	if (*s)
	{
		strlen++;
		strlen += _strlen_recursion(s + 1);
	}

	return (strlen);
}

/**
 * check_palindrome - check if string is palindrome
 * @s: string to check
 * @i: string index
 * @strlen: string lenght
 *
 * Return: Return: 1 if string is palindrome else return 0
 */
int check_palindrome(char *s, int i, int strlen)
{
	if (*s == s[strlen / 2])
	{
		return (1);
	}
	if (*s == s[strlen - i - 1])
	{
		return (check_palindrome(s, i + 1, strlen));
	}
	return (0);
}

/**
 * is_palindrome - check if a string reads the same backward and forward
 * @s: string to check
 *
 * Return: 1 if string is palindrome else return 0
 */
int is_palindrome(char *s)
{
	int i = 0;
	int strlen = _strlen_recursion(s);

	if (!(*s))
	{
		return (1);
	}
	else
	{
		return (check_palindrome(s, i, strlen));
	}
}
