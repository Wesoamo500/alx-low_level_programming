 #include "main.h"

/**
 * puts2 - prints a string in reverse, followed by a new line
 * @str: string to be printed
 */
void puts2(char *str)
{
int i, j;
i = 0;
while (str[i] != '\0')
{
i++;
}
j = 0;
while (j < i)
{
_putchar(str[j]);
j += 2;
}
_putchar('\n');
}
