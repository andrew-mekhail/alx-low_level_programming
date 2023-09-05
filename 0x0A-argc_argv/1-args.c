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
if (argv[0])
{
printf("%d\n", argc - 1);
}
return (0);
}
