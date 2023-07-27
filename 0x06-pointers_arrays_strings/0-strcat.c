#include "main.h"
/**
 *_strcat - concatenates two strings
 *@dest: A pointer to a character that will be changed
 *@src: A pointer to a character that will also be changed
 *Return: dest
 */


char *_strcat (char *dest, char *src) {
    int lenSrc = 0;
    int i = 0;
   
    while (*(src + i) != '\0') {
        lenSrc++;
        i++;
    }
    i = 0;
    while (*(dest + i) != '\0') {
        i++;
    }
    int y;
    for (y = 0; y < lenSrc; y++) {
        *(dest + i + y) = *(src + y);
    }
    *(dest + i + lenSrc) = '\0';
    
    return (dest);
}
