#include <stdio.h>
#include <string.h>

/**
 * _strcat - Function that returns the concatenated string
 *
 * @*dest: first parameter
 * @src: second parameter
 *
 * Return: concat
 *
 *
 */

char* _strncat(char* dest, const char* src, int n)
{
    char *d = dest;
    const char *s = src;

    while (*d)
        d++;

    while (n-- > 0 && (*d++ = *s++))
        ;

    *d = '\0';

    return dest;
}

