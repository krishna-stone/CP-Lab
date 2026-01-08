#include <stdio.h>

int main() {
    int a, b, c, d, e;
    float Average;

    printf("Subject1 Marks: ");
    scanf("%d", &a);

    printf("Subject2 Marks: ");
    scanf("%d", &b);

    printf("Subject3 Marks: ");
    scanf("%d", &c);

    printf("Subject4 Marks: ");
    scanf("%d", &d);

    printf("Subject5 Marks: ");
    scanf("%d", &e);

    Average = (a + b + c + d + e) / 5.0;  // Use 5.0 to ensure float division
    printf("Average: %.2f\n", Average);

    return 0;
}
