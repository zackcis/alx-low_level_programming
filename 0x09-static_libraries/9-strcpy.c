#include "main.h"

/**
 * _strcpy - Copies the string pointed to by src.
 * @dest: The destination to copy to.
 * @src: The source to copy from.
 *
 * Return: A pointer to the destination string.
 */
char *_strcpy(char *dest, char *src)
{
	int a = 0;
	int b = 0;

	while (*(src + a) != '\0')
	{
		a++;
	}

	for (; b < a; b++)
	{
		dest[b] = src[b];
	}

	dest[a] = '\0';

	return (dest);
}
