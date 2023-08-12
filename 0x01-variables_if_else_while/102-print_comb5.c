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
	      if ( i ==0 && j==0 && m==0)
             	{
                 k=1;
             	}
             else if (j==0)
             	{
                 k=0;
             	}
             else
             	{
                 k=1;
             	} 
            for (k=k+j; k < 10 ; k++)
            {
                putchar (i + '0' );
                putchar ( j + '0');
                putchar(' ');
                putchar (m + '0');
                putchar (k + '0');
                  if ((i!=9) || ( j!= 8) || (k!=9) || ( m!=9 ))
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

