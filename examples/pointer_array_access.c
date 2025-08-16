// pointer_array_access.c
// EN: Use a pointer to read array elements.
// SI: pointer එකක් යොදා අරේ අගයන් කියවන්න.
// TA: பாயிண்டரை பயன்படுத்தி வரிசை உறுப்புகளைப் படிக்கவும்.

#include <stdio.h>

int main(void) {
    int a[] = {10,20,30};
    int *p = a; // points to a[0]
    for (int i = 0; i < 3; i++) printf("%d ", *(p+i));
    printf("\n");
    return 0;
}
