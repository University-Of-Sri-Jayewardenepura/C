// factorial.c
// EN: Compute factorial N! using a loop.
// SI: N! එක loop එකකින් ගණනය කරනවා.
// TA: N! ஐ ஒரு சுற்றைப் பயன்படுத்தி கணக்கிடுதல்.

#include <stdio.h>

int main(void) {
    int n;
    printf("Enter N (0..12): ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Factorial not defined for negative numbers.\n");
        return 0;
    }

    unsigned long long fact = 1ULL;
    for (int i = 1; i <= n; i++) {
        fact *= (unsigned long long)i;
    }
    printf("%d! = %llu\n", n, fact);
    return 0;
}
