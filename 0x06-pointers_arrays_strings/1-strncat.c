#include "main.h"
/**
 * _strncat - concatenates at most n bytes from src to dest
 * @dest: destination string
 * @src: source string
 * @n: number of bytes to copy
 *
 * Return: pointer to the destination string
 */
char *_strncat(char *dest, char *src, int n)
{
int i, j;

for (i = 0; dest[i] != '\0'; i++)
    ;

for (j = 0; j < n && src[j] != '\0'; j++)
dest[i + j] = src[j];

dest[i + j] = '\0';

return (dest);
}
