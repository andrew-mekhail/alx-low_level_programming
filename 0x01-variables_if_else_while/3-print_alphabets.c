/*here are the header */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 * Description: 'printing all alphabet lower and upper case'
 * Return: Always 0 (Success)
 **/
int main(void)
{
char alphabet[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
int i;
for (i = 0; i < 52; i++)
{
putchar (alphabet[i]);
}
putchar('\n');
return (0);
}
