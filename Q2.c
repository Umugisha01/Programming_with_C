//Write a program to add 4 numbers and check average.
#include <stdio.h>

int main() {
    int a, b, c, d;
    printf("Enter four numbers: \n");
    printf("Enter number 1: ");
    scanf("%d", &a);
    printf("Enter number 2: ");
    scanf("%d", &b);
    printf("Enter number 3: ");
    scanf("%d", &c);
    printf("Enter number 4: ");
    scanf("%d", &d);
    //scanf("%d %d %d %d", &a, &b, &c, &d);

    int sum = a + b + c + d;
    float avg = sum / 4.0;

    printf("Average = %.2f\n", avg);

    if (avg <= 10) {
        printf("Grade C\n");
    } else if (avg > 10 && avg <= 18) {
        printf("Grade B\n");
    } else {
        printf("Grade A\n");
    }
    
    return 0;
}
