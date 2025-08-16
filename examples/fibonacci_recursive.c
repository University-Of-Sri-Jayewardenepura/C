// fibonacci_recursive.c
// EN: Print first N Fibonacci numbers using recursion.
// SI: recursion එකෙන් Fibonacci අංක N ප්‍රථමයි මුද්‍රණය කරනවා.
// TA: recursion மூலம் முதல் N Fibonacci எண்களை அச்சிடுதல்.

#include <stdio.h>

unsigned long long fib(unsigned int n) {
    if (n <= 1) return n;
    return fib(n-1) + fib(n-2);
}

int main(void) {
    unsigned int n; printf("Enter N (<=40): "); scanf("%u", &n);
    for (unsigned int i = 0; i < n; i++) {
        printf("%llu ", fib(i));
    }
    printf("\n");
    return 0;
}
