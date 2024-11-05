//Program with method of choice to display a pattern (example pattern).

#include <stdio.h>

void displayPattern() {
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }
}

int main() {
    displayPattern();
    return 0;
}