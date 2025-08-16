#include <stdio.h>

int main(void) {
    int n = 5;

    if (n > 10) {
        printf("n is greater than 10\n");
    } else if (n == 10) {
        printf("n is 10\n");
    } else {
        printf("n is less than 10\n");
    }

    switch (n % 3) {
        case 0: printf("n mod 3 == 0\n"); break;
        case 1: printf("n mod 3 == 1\n"); break;
        default: printf("n mod 3 == 2\n"); break;
    }

    return 0;
}
