// 1	3	7	15	31
#include <stdio.h>
int main() {
int i,n;
printf("Enter a number:");
scanf("%d",&n);
for (i=0;i<n;i=(2*i)+1)
{
printf("%d \t",i);
}
printf("\n");
return 0;
}
