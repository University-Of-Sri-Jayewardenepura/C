// array_sum.c
// EN: Sum all numbers in an array using a function.
// SI: ක්‍රියාවලියක් (function) භාවිතා කර අරේ එකක් එකතු කරනවා.
// TA: செயல்பாட்டைப் பயன்படுத்தி வரிசை உறுப்புகளை கூட்டுதல்.

#include <stdio.h>

int sum_array(const int *arr, int n) {
    int s = 0;
    for (int i = 0; i < n; i++) s += arr[i];
    return s;
}

int main(void) {
    int a[] = {2, 4, 6, 8};
    int n = (int)(sizeof a / sizeof a[0]);
    printf("Sum = %d\n", sum_array(a, n));
    return 0;
}
