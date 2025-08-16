// array_max.c
// EN: Find the biggest number in an array.
// SI: අරේ එකකින් වැඩිම අගය සොයන්න.
// TA: வரிசையில் மிகப்பெரிய மதிப்பை கண்டறிதல்.

#include <stdio.h>

int main(void) {
    int a[] = {3, 9, 1, 7, 5};
    int n = (int)(sizeof a / sizeof a[0]);
    int max = a[0];
    for (int i = 1; i < n; i++) if (a[i] > max) max = a[i];
    printf("Max = %d\n", max);
    return 0;
}
