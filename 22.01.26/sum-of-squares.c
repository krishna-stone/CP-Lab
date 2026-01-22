/*
1 + X^1 + X^2 + X^3 +X^4 + ...
*/

#include <stdio.h>
int main()
{
int x, n, s=0 , p=1;

printf("1 + X^1 + X^2 + X^3 + X^4 + ......+ X^n");
printf("Enter the value of X :");
scanf("%d", &x);
printf("Enter the value of n :");
scanf("%d", &n);
for(n;n>=0;n--)
{
 for(int i =n;i>0;i--)
 {
  p *= x;
 }
 s += p;
 printf("%d \t",s);
}
printf("\n %d \n",s);
return 0;
}
