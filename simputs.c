#include "main.h"

/**
 * simputchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int simputchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * simputs - prints a string to stdout
 * @s: A string to print
 * Return: The length of the string
 */
int simputs(char *s)
{
	int q = 0;

	while (s[q])
	{
		simputchar(s[q]);
		q++;
	}
	return (q);
}
