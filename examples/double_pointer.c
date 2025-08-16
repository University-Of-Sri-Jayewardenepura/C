// double_pointer.c
// EN: A pointer that points to another pointer.
// SI: තවත් pointer එකකට යොමුවෙන pointer එකක්.
// TA: மற்றொரு பாயிண்டரைச் சுட்டும் பாயிண்டர்.

#include <stdio.h>

int main(void) {
    int x = 5; int *p = &x; int **pp = &p;
    printf("x=%d, *p=%d, **pp=%d\n", x, *p, **pp);
    **pp = 99;
    printf("x after **pp=99 -> %d\n", x);
    return 0;
}
