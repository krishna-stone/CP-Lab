#include <stdio.h>

int main() {
int s1, s2 , s3, s4, s5 ,t;
printf("Enter the marks of 5 subjects \n");
scanf("%d %d %d %d %d" ,&s1 , &s2,  &s3,  &s4 , &s5);

t = (s1 + s2 + s3 + s4 + s5)/5;

if (t >=90) {
printf("Grade is O");
}
else if (t >=80) {
printf("Grade is E");
}
else if (t >= 70) {
printf("Grade is A");
}
else if (t >= 60) {
printf("Grade is B");
}
else if (t >= 50) {
printf("Grade is C");
}
else if (t >= 40) {
printf("Grade is D");
}
else {
printf("Grade is F");}

return 0;
}
