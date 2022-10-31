#include "main.h"
#include <stddef.h>

/**
 * _strchr - locates a character
 * @s: the string we look thru
 * @c: the character we look for
 *
 * Return: a pointer to the char or NULL
 *
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
char *ptr = dest;

while (n-- > 0)
{
*dest = *src;
dest++;
src++;
}
return (ptr);
}
