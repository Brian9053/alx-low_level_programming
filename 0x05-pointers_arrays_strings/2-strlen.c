#include "main.h"
/**
 * _strlen - rite a function that returns the length of a string.
 * @s: striwhose length is to be be counted
 * Return: a value
 */
int _strlen(char *s);
{
	int i;
	int count = 0;

	for (i = 0; s[i] != '\0'; i)
	{
		count++;
	}
	return (count);
}
