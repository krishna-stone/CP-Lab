#include <stdio.h>

int main() {
int a,n=2;
printf("Enter a number:");
scanf("%d",&a);
for(n;n<a;n++)
{ if(a%n !=0)
 printf("Number is a prime number\n");
  else {
  printf("Number is not prime\n");
  }
}

return 0;
}
