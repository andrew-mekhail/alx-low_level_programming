/*here are the header */
#include <stdio.h>

int main(void)
{
  char alphabet[26] = "abcdefghijklmnopqrstuvwxyz" ;
  int i ;
  for ( i=0; alphabet[i] != '\n'; i++)
    {
      putchar (alphabet[i]);

    }
  putchar('\n');
  return (0);
}
