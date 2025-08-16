// dynamic_memory.c
// EN: Create an array at runtime with malloc and free it.
// SI: malloc භාවිතා කර ධාවන කාලයේ අරේ සෑදීම, ඉවසීම.
// TA: malloc மூலம் இயக்கநேரத்தில் வரிசையை உருவாக்கி பின்னர் free செய்க.

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int n; printf("Enter size: "); scanf("%d", &n);
    int *a = (int*)malloc((size_t)n * sizeof *a);
    if (!a) { perror("malloc"); return 1; }
    for (int i = 0; i < n; i++) a[i] = i;
    for (int i = 0; i < n; i++) printf("%d ", a[i]);
    printf("\n");
    free(a);
    return 0;
}
