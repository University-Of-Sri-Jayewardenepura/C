// is_prime.c
// EN: Check if a number is prime using a simple loop.
// SI: සරල loop එකකින් ප්‍රථම සංඛ්‍යාවද කියලා බලනවා.
// TA: எளிய சுற்றின் மூலம் ஒரு எண் பகாத்தொகையா என்று பார்க்கவும்.

#include <stdio.h>

int is_prime(int n) {
    if (n <= 1) return 0;
    for (int i = 2; i * i <= n; i++) if (n % i == 0) return 0;
    return 1;
}

int main(void) {
    int n; printf("Enter n: "); scanf("%d", &n);
    printf(is_prime(n) ? "Prime\n" : "Not prime\n");
    return 0;
}
