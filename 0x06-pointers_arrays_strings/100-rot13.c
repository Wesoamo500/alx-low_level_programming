#include "main.h"

/**
 * rot13 - Encodes a string using the ROT13 algorithm.
 * @s: The string to be encoded.
 *
 * Return: The resulting encoded string.
 */
char *rot13(char *s)
{
int i;
char *input = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char *output = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
for (i = 0; s[i] != '\0'; i++)
{
char *ptr = strchr(input, s[i]);
if (ptr != NULL)
{
int index = ptr - input;
s[i] = output[index];
}
}
return s;
}
