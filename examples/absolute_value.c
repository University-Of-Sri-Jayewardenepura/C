// absolute_value.c
// EN: Reads a number and prints its absolute value (always positive or zero).
// SI: සංඛ්‍යාවක් කියවලා එහි නිර්පේක්ෂ අගය (සෑමවිටම ධන හෝ ශූන්ය) මුද්‍රණය කරයි.
// TA: ஒரு எண்ணை வாசித்து அதன் முழுத்தொகை (எப்போதும் நேர்ம அல்லது பூஜ்யம்) அச்சிடும்.

#include <stdio.h>

int main(void) {
    int x;

    // EN: Ask the user for a number.
    // SI: පරිශීලකගෙන් සංඛ්‍යාවක් ගන්නවා.
    // TA: பயனரிடமிருந்து ஒரு எண்ணை கேட்கலாம்.
    printf("Enter an integer: ");
    scanf("%d", &x);

    // EN: If x is negative, make it positive by multiplying with -1.
    // SI: x ঙ්කින් කාරණා අගයක් නම්, -1 ගුණ කර ධන කරනවා.
    // TA: x எதிர்மையானால், -1-இன் மூலம் பெருக்கி நேர்மமாக்குகிறோம்.
    if (x < 0) {
        x = -x;
    }

    printf("Absolute value = %d\n", x);
    return 0;
}
