#include "3-calc.h"

/**
 * main - program that perfroms simple operations
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
int x, y, result;
char o;
int (*func)(int, int);
if (argc != 4)
{
printf("Error\n");
exit(98);
}
x = atoi(argv[1]);
y = atoi(argv[3]);
func = get_op_func(argv[2]);
if (!func)
{
printf("Error\n");
exit(99);
}
o = *argv[2];
if ((o == '/' || o == '%') && y == 0)
{
printf("Error\n");
exit(100);
}
result = func(x, y);
printf("%d\n", result);
return (0);
}
