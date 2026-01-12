#include <stdio.h>

int main() {
  int rnum , num;
  printf("Enter a number :");
  scanf("%d", &num);
  while (num != 0) {
  rnum = num % 10 ;
  num = num / 10;
  printf("%d", rnum);
  }
  printf("\n");
  return 0;
}
