// swap_pointers.c
// EN: Swap two numbers using pointers (we change the values at their addresses).
// SI: පෝයින්ටර් භාවිතා කර අංක දෙක හුවමාරු කරනවා (ලිපින වල අගයන් පරිවර්තනය කරනවා).
// TA: பாயிண்டர்களைப் பயன்படுத்தி இரண்டு எண்களை மாற்றுகிறோம் (முகவரிகளில் உள்ள மதிப்புகளை மாற்றுகிறோம்).

#include <stdio.h>

void swap(int *x, int *y) {
    int t = *x; // EN/SI/TA: read value at address x
    *x = *y;
    *y = t;
}

int main(void) {
    int a, b;
    printf("Enter two integers (a b): ");
    scanf("%d %d", &a, &b);
    swap(&a, &b); // EN/SI/TA: pass addresses (pointers)
    printf("After swap: a=%d, b=%d\n", a, b);
    return 0;
}
