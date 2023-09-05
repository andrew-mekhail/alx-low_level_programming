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
int i;
if (argc > 0)
{
for (i = 0; i < argc; i++)
{
printf("%s\n", argv[i]);
}
}
return (0);
}
