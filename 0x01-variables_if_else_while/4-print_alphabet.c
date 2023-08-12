/*here are the header */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
  char alphabet[26] = "abcdefghijklmnopqrstuvwxyz" ;
  int i ;
  for ( i=0; i<26; i++)
    {
	    if ( alphabet[i] == 'e' || alphabet [i] == 'q')
	    {
	    	i++;
		putchar ( alphabet[i]);
	    }
	    else
	    {
	    
	       putchar (alphabet[i]);
	    }
    }
  putchar('\n');

  return (0);
}
