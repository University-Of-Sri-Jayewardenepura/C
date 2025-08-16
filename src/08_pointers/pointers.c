#include <stdio.h>

int main(void) {
    int x = 42;
    int* px = &x;   // pointer to int

    printf("x=%d, &x=%p, px=%p, *px=%d\n", x, (void*)&x, (void*)px, *px);

    // Pointer arithmetic with arrays
    int arr[3] = {10,20,30};
    int* p = arr; // points to arr[0]
    printf("*(p+2)=%d\n", *(p+2));

    // Double pointer
    int** ppx = &px;
    **ppx = 99;
    printf("x after **ppx=99 -> %d\n", x);

    return 0;
}
