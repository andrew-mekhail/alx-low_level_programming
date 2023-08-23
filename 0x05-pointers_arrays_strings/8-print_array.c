#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * print_array - printing an array
 * @a : pointer to integer
 * @n : number of arrays
 * Return: nothing
 */
void print_array(int *a, int n)
{
int i;
for (i = 0; i < n ; i++)
{
printf("%d", *(a + i));
if (i != n - 1)
{
printf(", ");
}
}
printf("\n");
}
