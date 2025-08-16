// array_print.c
// EN: Make an array and print its elements using a loop.
// SI: අරේ එකක් සෑදලා loop එකකින් අංග ප්‍රින්ට් කරනවා.
// TA: ஒரு வரிசையை உருவாக்கி அதன் உறுப்புகளை சுற்றின் மூலம் அச்சிடுதல்.

#include <stdio.h>

int main(void) {
    int a[5] = {1, 2, 3, 4, 5};
    for (int i = 0; i < 5; i++) {
        printf("a[%d] = %d\n", i, a[i]);
    }
    return 0;
}
