#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/**
 * main - Entry point
 * Description: 'printing last digit'
 * Return: Always 0 (Success)
 **/
int main(void)
{
int n, m;
srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */
m = n % 10;
if (m  == 0)
{
printf("Last digit of %d is %d and is 0\n", n, m);
}
else if (m > 5)
{
printf("Last digit of %d is %d and is greater than 5\n", n, m);
}
else if (m < 6)
{
printf("Last digit of %d is %d and less than 6 and not 0\n", n, m);
}
return (0);
}
