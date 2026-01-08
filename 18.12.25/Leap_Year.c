#include <stdio.h>

int main() {
int year;

printf("Enter a Year:");
scanf("%d", &year);

if (year%4 == 0) {
printf("Year is Leap year");
}
else {
printf("Year is Not leap Year");
}

return 0;
}
