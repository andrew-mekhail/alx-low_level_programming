/*here are the header */
#include <stdio.h>
#include <stdlib.h> 
int main(void)
{
  char alphabet[26] = "abcdefghijklmnopqrstuvwxyz" ;
  int i ;
  for ( i=0; alphabet[i] != '\n'; i++)
    {
      putchar (alphabet[i]);

    }

  return (0);
}
