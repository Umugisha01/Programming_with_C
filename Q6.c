#include <stdio.h>

int main() {
    int count = 1;

    // while loop
    while (count <= 5) {
        printf("Count (while) = %d\n", count);
        count++;
    }

    int num = 1;

    // do...while loop
    do {
        printf("Count (do...while) = %d\n", count);
        num++;
    } while (num <= 5);

    return 0;

}
