#include <stdlib.h>
#include "main.h"

/**
 * *_strdup - copies the string given as parameter
 * @str: string to duplicate
 *
 * Return: pointer to the copied string (Success), NULL (Error)
 */
char *_strdup(char *str)
{
char *str2
unsigned int i = 0;
unsigned int len = 0;
if (str == NULL)
return (NULL);
while (str[len])
len++;
str2 = (char *) malloc((len + 1) * sizeof(char));
if (str2 == NULL)
return (NULL);
while (str[i] != '\0')
{
str2[i] = str[i];
i++;
}
return (str2);
}
