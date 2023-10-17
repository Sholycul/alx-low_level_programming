#include <stdio.h>
#include <string.h>

/**
 * puts2 - Reverse string in two
 *
 * This function takes in a string `str` and prints every
 * other character, starting with the first character.
 *
 * @str: Pointer to the string to be processed
 *
 * Return: None
 */
void puts2(char *str)
{
    while (*str != '\0')
    {
        printf("%c", *str);
        str += 2;
    }
    printf("\n");
}
