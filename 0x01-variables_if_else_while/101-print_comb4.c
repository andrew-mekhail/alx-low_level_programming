#include <stdio.h>
#include <stdlib.h>
int main(void)
{
  int i ,j,m;
  for ( i=0; i<10; i++)
    {

      for ( j=i+1; j<10 ; j++)
      {
          for ( m=j+1 ; m < 10 ; m++ )
          {

            putchar (i + '0' );
            putchar ( j + '0');
            putchar (m + '0');
            if ((i != 7) || (j !=8) || (m != 9) )
            {
                putchar (',');
                putchar (' ');

            }
          }

        }

    }
    putchar ('\n');
  return (0);
}
