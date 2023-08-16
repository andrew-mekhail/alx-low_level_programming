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
fibonacci_numbers[0] = 1;
fibonacci_numbers[1] = 2;
printf("%lu, ", fibonacci_numbers[0]);
for (i = 2; i < 44; i++)
{
fibonacci_numbers[i] = fibonacci_numbers[i - 1] + fibonacci_numbers[i - 2];
}
for (j = 1 ; j < 45 ; j++)
{
printf("%lu, ", fibonacci_numbers[j]);
}

printf("4807526976, 7778742049, 12586269025, 20365011074\n");
}
}
return (0);
}
