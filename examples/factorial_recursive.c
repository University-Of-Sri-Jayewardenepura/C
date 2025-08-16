// factorial_recursive.c
// EN: Compute factorial using recursion.
// SI: recursion භාවිතයෙන් factorial ගණනය කරනවා.
// TA: recursion மூலம் factorial கணக்கிடுதல்.

#include <stdio.h>

unsigned long long fact(unsigned int n) {
    if (n <= 1) return 1ULL; // base case
    return n * fact(n - 1);  // recursive step
}

int main(void) {
    unsigned int n; printf("Enter n: "); scanf("%u", &n);
    printf("%u! = %llu\n", n, fact(n));
    return 0;
}
