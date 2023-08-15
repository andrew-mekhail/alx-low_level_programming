#include <stdlib.h>
#include <unistd.h>

int main(void)
{
int i;
char output[8] = "_putchar";
for (i = 0 ; i < 8 ; i++)
{
_putchar(output[i]);
}

return (1);
}
