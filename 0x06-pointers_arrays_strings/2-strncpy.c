#include "main.h"

/**
 * _strncpy - Copies at most an
 * inputted number of byte from string src into dest
 * @dest: buffer storing of the string copy
 * @src: source of the string
 * @n: max no of bytes to copied from src
 * Return: a pointer to the resulting string dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int index = 0, src_len = 0;

	while (src[index++])
		src_len++;
	for (index = 0; src[index] && index < n; index++)
		dest[index] = src[index];
	for (index = src_len; index < n; index++)
		dest[index] = '\0';
	return (dest);
}
