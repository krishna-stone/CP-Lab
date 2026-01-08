#include <stdio.h>

int main(void) {
int x;

printf("Enter a number between 0-7:");
scanf("%d", &x);

switch(x) {
case 1:
printf("Monday");
break;
case 2:
printf("Tuesday");
break;
case 3:
printf("Wednesday");
break;
case 4:
printf("Thursday");
break;
case 5:
printf("Friday");
break;
case 6:
printf("Saturday");
break;
case 7:
printf("Sunday");
break;
default:
printf("Error!\nError\nEnter a Valid No from 0-7\n");
break;
 }

}
