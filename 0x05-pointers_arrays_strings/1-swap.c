#include <stdlib.h>
#include "main.h"
/**
 * swap_int - changain the valu of pointer to 9
 * @a : pointer to integer
 * @b : pinter to integer
 * Return: nothing
 */
void  swap_int(int *a, int *b)
{
int temp;
temp = *b;
*b = *a;
*a = temp;
}
