#include <stdlib.h>
#include <stdio.h>
/**
 * main - entry point
 * description : printing sum of even numbers of fibionacci
 * Return: success
 **/
int main(void)
{
int i, j;
unsigned long int sum = 0;
unsigned long int fibonacci_numbers[46];
fibonacci_numbers[0] = 1;
fibonacci_numbers[1] = 2;

for (i = 2; i < 47; i++)
{
fibonacci_numbers[i] = fibonacci_numbers[i - 1] + fibonacci_numbers[i - 2];
}
for (j = 0 ; j <= 45 ; j++)
{
if ((fibonacci_numbers[j] < 4000000) && ((fibonacci_numbers[j] % 2) == 0))
{

sum = sum + fibonacci_numbers[j];
}
else
{
continue;
}

}
printf("%lu\n", sum);

return (0);
}
