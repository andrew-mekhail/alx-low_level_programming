#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * main - printinng the name of function
 * @argc : number of arguments
 * @argv : pointer to string
 * Return: success
 */
int main(int argc, char *argv[])
{
int i, j, mul;
if (argc < 3)
{
printf("Error\n");
return (1);
}
else
{
i = atoi(argv[1]);
j = atoi(argv[2]);
mul = i *j;
printf("%d\n", mul);
return (0);
}
}
