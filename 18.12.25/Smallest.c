#include <stdio.h>


int main() {
int a , b;

printf("Enter a Number:");
scanf("%d", &a);
printf("Enter another Number:");
scanf("%d", &b);

if (a < b) {
printf("%d is greater than %d \n", b , a);
}
else {
printf("%d is greater than %d \n", a , b);
}
return 0;
}
