// sum_n_natural.c
// EN: Sum numbers from 1 to N using a for loop.
// SI: 1 සිට N දක්වා එකතුව for loop එකකින් ගන්නවා.
// TA: 1 முதல் N வரை கூட்டுத்தொகை for சுற்றைப் பயன்படுத்தி.

#include <stdio.h>

int main(void) {
    int n;
    printf("Enter N: ");
    scanf("%d", &n);
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += i; // EN/SI/TA: add i to sum
    }
    printf("Sum = %d\n", sum);
    return 0;
}
