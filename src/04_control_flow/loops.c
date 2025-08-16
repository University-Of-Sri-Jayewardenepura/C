#include <stdio.h>

int main(void) {
    int i = 0;

    printf("while loop: ");
    while (i < 3) {
        printf("%d ", i);
        i++;
    }
    printf("\n");

    printf("do-while loop: ");
    int j = 0;
    do {
        printf("%d ", j);
        j++;
    } while (j < 3);
    printf("\n");

    printf("for loop: ");
    for (int k = 0; k < 3; k++) {
        printf("%d ", k);
    }
    printf("\n");

    return 0;
}
