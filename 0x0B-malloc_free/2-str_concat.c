#include <stdlib.h>
#include "main.h"

/**
 * *str_concat - concatenates two strings
 * @s1: string to concatenate
 * @s2: other string to concatenate
 *
 * Return: pointer to the new string created (Success), or NULL (Error)
 */
char *str_concat(char *s1, char *s2)
{
char *s3;
unsigned int i = 0;
unsigned int j = 0;
unsigned int s1_len = 0;
unsigned int s2_len = 0;
while (s1 && s1[s1_len])
s1_len++;
while (s2 && s2[s2_len])
s2_len++;
s3 = (char *) malloc(sizeof(char) * (s1_len + s2_len + 1));
if (s3 == NULL)
return (NULL);
if (s1)
{
while (i < s1_len)
{
s3[i] = s1[i];
i++;
}
}
if (s2)
{
while ((i < s1_len + s2_len))
{
s3[i] = s2[j];
i++;
j++;
}
}
s3[i] = '\0';
return (s3);
}
