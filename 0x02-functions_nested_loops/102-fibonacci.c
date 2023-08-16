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
unsigned long int fibonacci_numbers[44];
unsigned long int larg_numbers[4];
fibonacci_numbers[0] = 1;
fibonacci_numbers[1] = 2;
for (i = 2; i < 50; i++)
{
fibonacci_numbers[i] = fibonacci_numbers[i - 1] + fibonacci_numbers[i - 2];
}

larg_numbers[0] = fibonacci_numbers[44] + fibonacci_numbers[43];
larg_numbers[1] = fibonacci_numbers[44] + larg_numbers[0];
larg_numbers[2] = larg_numbers[1] + larg_numbers[0];
larg_numbers[3] = larg_numbers[2] + larg_numbers[1];
larg_numbers[4] = larg_numbers[3] + larg_numbers[2];
for (j = 0 ; j < 45 ; j++)
{
printf("%lu, ", fibonacci_numbers[j]);
}
for (j = 0 ; j < 5; j++)
{
if (j == 4)
{
printf("%lu\n", larg_numbers[j]);
}
else
{
printf("%lu, ", larg_numbers[j]);
}
}
return (0);
}
