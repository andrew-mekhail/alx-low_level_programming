#include <stdio.h>
#include <stdlib.h>
int main(void)
{
  int i ,j,m,k;
  for ( i=0; i<10; i++)
    {

      for ( j=0; j<10 ; j++)
      {
          for ( m=0+i ; m < 10 ; m++ )
          {
            for (k=0+j; k < 9 ; k++)
            {
                putchar (i + '0' );
                putchar ( j + '0');
                putchar(' ');
                putchar (m + '0');
                putchar (k +1+ '0');
                  if ((i!=9) || ( j!= 8) || (k!=8) || ( m!=9 ))
                      {
                        putchar (',');
                        putchar (' ');
                      }

          }
        }

        }

    }
    putchar ('\n');
  return (0);
}

