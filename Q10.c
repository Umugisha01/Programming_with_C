//infinite loop:

#include <stdio.h>

int main() {
    int counter = 1;

    // Infinite loop using do-while
    do {
        printf("This is iteration %d\n", counter);
    } while (1);  

    return 0;
}
