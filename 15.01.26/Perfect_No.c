//Sum of factors = number
#include <stdio.h>
int main() {
int x,i,sum=0;
 printf("Enter a number :");
        scanf("%d", &x);
        for(i=1;i<x;i++){
          if(x%i==0)
	  sum +=i;
        }
	if(x==sum)
        printf("The number is Perfect\n");
	else
	printf("The number is not Perfect\n");
        return 0;
}
