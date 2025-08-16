#include <stdio.h>
#include <stdlib.h>

// Recursive factorial for demo (not for large n)
unsigned long long fact(unsigned int n) {
    if (n <= 1) return 1ULL;
    return n * fact(n - 1);
}

int main(int argc, char* argv[]) {
    // Dynamic allocation
    int n = 5;
    int* a = malloc((size_t)n * sizeof *a);
    if (!a) { perror("malloc"); return 1; }
    for (int i = 0; i < n; i++) a[i] = i*i;
    for (int i = 0; i < n; i++) printf("a[%d]=%d\n", i, a[i]);
    free(a);

    // Recursion
    printf("fact(5)=%llu\n", fact(5));

    // Command-line arguments
    printf("argc=%d\n", argc);
    for (int i = 0; i < argc; i++) {
        printf("argv[%d]=%s\n", i, argv[i]);
    }

    return 0;
}
