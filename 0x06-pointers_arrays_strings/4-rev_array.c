#include <stdlib.h>
#include "main.h"
/**
 * reverse_array - storing array  in reverse way
 * @a : poiner to integer
 * @n : number of array
 * Return: nothing
 */
void reverse_array(int *a, int n)
{
int  j, temp;
j = 0;
for (j = 0 ; j < n / 2  ; j++)
{
temp = *(a + n - 1 - j);
*(a + n - 1 - j) = *(a + j);
*(a + j) = temp;
}
}
