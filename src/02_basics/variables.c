#include <stdio.h>
#include <limits.h>

#define DAYS_IN_WEEK 7

int main(void) {
    // Variables and initialization
    int a = 10;        // int
    unsigned int b = 20U; // unsigned
    long c = 30000L;   // long
    float f = 3.14f;   // float
    double d = 2.71828; // double
    const int DAYS = DAYS_IN_WEEK; // const with macro

    printf("a=%d, b=%u, c=%ld\n", a, b, c);
    printf("f=%.2f, d=%.5f\n", f, d);
    printf("DAYS=%d, INT_MAX=%d\n", DAYS, INT_MAX);

    // Scope demonstration
    int x = 1;
    {
        int x = 2; // shadows outer x
        printf("inner x=%d\n", x);
    }
    printf("outer x=%d\n", x);

    return 0;
}
