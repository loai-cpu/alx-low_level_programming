#include "main.h"
/**
 * _strncpy - copies at most n characters from src to dest
 * @dest: destination buffer
 * @src: source buffer
 * @n: number of characters to copy
 *
 * Return: pointer to the destination buffer
 */
char *_strncpy(char *dest, char *src, int n)
{
  int i;

for (i = 0; i < n && src[i] != '\0'; i++)
{
    dest[i] = src[i];

}

for ( ; i < n; i++)
{
    dest[i] = '\0';
}

  return (dest);
}

