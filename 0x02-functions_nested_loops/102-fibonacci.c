#include <stdlib.h>
#include <stdio.h>
/**
 * main - entry point
 * description : printing fibonacci numbers
 * Return: success
 **/
int main(void)
{
int i, j;
long int fibonacci_numbers[49];
fibonacci_numbers[0] = 1;
fibonacci_numbers[1] = 2;
for (i = 2; i < 50; i++)
{
fibonacci_numbers[i] = fibonacci_numbers[i - 1] + fibonacci_numbers[i - 2];
}
for (j = 0 ; j < 50 ; j++)
{
if (j == 49)
{
printf("%ld\n", fibonacci_numbers[j]);
}
printf("%ld, ", fibonacci_numbers[j]);
}
return (0);
}
