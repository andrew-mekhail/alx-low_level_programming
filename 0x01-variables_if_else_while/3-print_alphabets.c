/*here are the header */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
  char alphabet[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ" ;
  int i ;
  for ( i=0; i<52; i++)
    {
      putchar (alphabet[i]);

    }
  putchar('\n');
  putchar('\n');
  return (0);
}
