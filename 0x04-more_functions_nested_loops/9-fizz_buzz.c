#include <stdlib.h>
#include <stdio.h>
/**
 * main - entry point
 * void : takes no argument
 * Return: success 0
 */
int main(void)
{
int i;
for (i = 1 ; i < 101 ; i++)
{
if ((i % 3 == 0) && (i % 5 == 0))
{
printf("FizzBuzz ");
continue;
}
else if (i % 3 == 0)
{
printf("Fizz ");
continue;
}
else if (i % 5 == 0 && i == 100)
{
printf("Buzz\n");
continue;
}
else if (i % 5 == 0 && i != 100)
{
printf("Buzz ");
continue;
}
else
{
printf("%d ", i);
}
}
return (0);
}
