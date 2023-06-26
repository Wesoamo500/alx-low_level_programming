#include "main.h"

/**
 * print_rev - prints a string in reverse, followed by a new line
 * @s: string to be printed
 */
void print_rev(char *s)
{
int i, j, strlen;
i = 0;
while (s[i] != '\0')
{
i++;
}
strlen = i;
j = strlen - 1;
while (j >= 0)
{
_putchar(s[j]);
j--;
}
_putchar('\n');
}
