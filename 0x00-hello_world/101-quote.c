#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * main - Entry point
 *
 * Description: Write a C program that prints exactly "and that piece of art is
 * useful\" - Dora Korpar, 2015-10-19", followed by a new line, to the standard
 * error.
 * Return: 0 (success) and 1 (failure) to execute
 */

int main(void)
{
	char msg[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	fwrite(&msg, sizeof(msg), 1, stderr);
	return (0);
}
