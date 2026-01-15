#include <stdio.h>
// print factorial of a number
int main(){
int n;
double f=1;
printf("Enter a number:");
scanf("%d",&n);

for(int y=1;y<=n;y++)
{ f = f*y;
}
printf(" %lf\n",f);
return 0;
}
