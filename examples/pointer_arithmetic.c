// pointer_arithmetic.c
// EN: Show pointer increment/decrement.
// SI: pointer එක වැඩි කිරීම/අඩු කිරීම පෙන්වයි.
// TA: பாயிண்டர் அதிகரிப்பு/குறைப்பை காண்பிக்கவும்.

#include <stdio.h>

int main(void) {
    int a[] = {1,2,3};
    int *p = a;
    printf("*p=%d\n", *p);
    p++; // move to next element
    printf("*p after ++ = %d\n", *p);
    p--; // move back
    printf("*p after -- = %d\n", *p);
    return 0;
}
