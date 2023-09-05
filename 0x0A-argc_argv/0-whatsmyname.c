#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * main - printinng the name of function
 * @argc : number of arguments
 * @argv : pointer to string
 * Return: success
 */
int main (int argc, char *argv[])
{
if ( argc > 0)
{
printf("%s\n", argv[0]);
}
return (0);
}
