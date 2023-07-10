#include <stdlib.h>
#include "main.h"

/**
 * *create_array - creates an array of chars,
 * and initializes it with a specific char
 * @size: size of the array to create
 * @c: char to initialize the array c
 *
 * Return: pointer to the array (Success), NULL (Error)
 */
char *create_array(unsigned int size, char c)
{
char *x;
unsigned int i = 0;
if (size == 0)
return (NULL);
*x = (char *) malloc(size * sizeof(char));
if (x == NULL)
return (0);
for (i = 0; i < size; i++)
x[i] = c;
*(x + 1) = '\0';
return (x);
}
