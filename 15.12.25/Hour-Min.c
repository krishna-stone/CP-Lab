#include <stdio.h>

int main()
{
int h1 , m1 , s1;
int h2 , m2 , s2;
int h  , m  , s ;

// First Time
printf("Enter First Time:");
scanf("%d %d %d" ,&h1 , &m1 , &s1);

// Second Time
printf("Enter Second Time:");
scanf("%d %d %d" ,&h2 , &m2 , &s2);

s = s1 + s2;
m = m1 + m2 + s/60;
s = s % 60;

h = h1 + h2 + m / 60;
m = m % 60;

// Final Time
printf("Final Time: %d-%d-%d", h , m , s);

return 0;
}
