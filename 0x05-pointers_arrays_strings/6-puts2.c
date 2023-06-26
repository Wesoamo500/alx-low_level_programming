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
j = 0;
while (j < i)
{
_putchar(s[j]);
j += 2;
}
_putchar('\n');
}
