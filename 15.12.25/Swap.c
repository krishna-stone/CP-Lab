#include <stdio.h>

int main(){
int a ,b ;
printf("First Integer : \n");
scanf("%d", &a);
printf("Second Integer : \n");
scanf("%d", &b);
 a = a + b;
 b = a - b;
 a = a - b;
printf("First Integer %d \n",a );
printf("Second Integer %d \n",b );
return 0;
}
