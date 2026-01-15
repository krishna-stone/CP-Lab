#include <stdio.h>

int main() {
int num, modif,arm,temp;

printf("Enter a number:");
scanf("%d",&num);

arm =0;
modif=num;

while(modif !=0){
arm+=(modif%10)*(modif%10)*(modif%10);
modif/=10;
}

if (arm == num)
printf("%d is an armstring number\n",num);

else
printf("Not an armstrong number\n");
return 0;
}
