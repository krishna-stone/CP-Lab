#include <stdio.h>

int main()
{
int a, b , c ;

a = 34;
b = 99;

printf("The two numbers a , b are %d %d \n", a , b );

c = b;
b = a;
a = c;

printf("The swapped values of a , b are %d %d", a , b);

return 0;
}
