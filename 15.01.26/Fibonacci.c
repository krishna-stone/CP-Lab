//0 1 1 2 3 5 8 13 21 ...

#include <stdio.h>
int main() {
int a=0,b=1,n;
printf("Enter a number:");
scanf("%d",&n);

for (int i=1;i<=n;i++)
{
if(i==1)
printf("%d %d ",a, b);

else
printf("%d ", b);

b =a+b;
a = b-a;
}
return 0;
}
