/*here are the header */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 * Description: 'printing lowercase alphabet'
 * Return: Always 0 (Success)
 **/
int main(void)
{
char alphabet[26] = "abcdefghijklmnopqrstuvwxyz";
int i;

for (i = 0; i < 26; i++)
{
putchar (alphabet[i]);
}
putchar('\n');
return (0);
}
