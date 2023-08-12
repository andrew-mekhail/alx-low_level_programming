/*here are the header */
#include <stdio.h>

int main(void)
{
  char alphabet [] = "abcdefghijklmnopqrstuvwxyz";
  int i=0 ;
  while (alphabet[i] != '\n')
    {
      putchar (alphabet[i]);
      i++;
    }
  putchar('\n');


  return (0);
}
