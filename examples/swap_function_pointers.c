// swap_function_pointers.c
// EN: Function that swaps two ints using pointers.
// SI: pointers භාවිතා කර int දෙකක් හුවමාරු කරන function එක.
// TA: பாயிண்டர் மூலம் இரண்டு int-களை மாற்றும் செயல்பாடு.

#include <stdio.h>

void swap(int *a, int *b) { int t = *a; *a = *b; *b = t; }

int main(void) {
    int x=1,y=2; swap(&x,&y); printf("x=%d y=%d\n", x, y); return 0;
}
