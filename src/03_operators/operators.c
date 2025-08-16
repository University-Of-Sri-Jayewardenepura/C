#include <stdio.h>
#include <stdbool.h>

int main(void) {
    int a = 7, b = 3;

    // Arithmetic
    printf("Arithmetic: a=%d, b=%d\n", a, b);
    printf("a+b=%d, a-b=%d, a*b=%d, a/b=%d, a%%b=%d\n", a+b, a-b, a*b, a/b, a%b);

    // Relational and logical
    bool rel = (a > b) && (b != 0);
    printf("Relational && logical: (a>b)&&(b!=0) -> %s\n", rel ? "true" : "false");

    // Bitwise
    printf("Bitwise: a&b=%d, a|b=%d, a^b=%d, ~a=%d, a<<1=%d, a>>1=%d\n",
           (a & b), (a | b), (a ^ b), (~a), (a << 1), (a >> 1));

    // Assignment
    int x = 5;
    x += 2; // 7
    x *= 3; // 21
    printf("Assignment chain x=%d\n", x);

    // sizeof
    printf("sizeof(int)=%zu, sizeof(double)=%zu\n", sizeof(int), sizeof(double));

    // Ternary
    int max = (a > b) ? a : b;
    printf("max(a,b)=%d\n", max);

    return 0;
}
