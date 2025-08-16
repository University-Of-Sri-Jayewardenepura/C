// min_of_two.c
// EN: Find the smaller of two numbers using the ?: operator.
// SI: ?: ක්‍රියාකාරකමෙන් අංක දෙකෙන් කුඩා එක හඳුනාගනී.
// TA: ?: சாரிணியைப் பயன்படுத்தி இரண்டு எண்களில் சிறியதை கண்டறிதல்.

#include <stdio.h>

int main(void) {
    int a, b;
    printf("Enter two integers (a b): ");
    scanf("%d %d", &a, &b);
    int min = (a < b) ? a : b; // EN/SI/TA: if a<b then a else b
    printf("Min = %d\n", min);
    return 0;
}
