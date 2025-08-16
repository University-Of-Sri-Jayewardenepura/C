// bubble_sort.c
// EN: Sort an array using bubble sort.
// SI: bubble sort එකෙන් අරේ එකක් sort කරනවා.
// TA: bubble sort மூலம் வரிசையை வரிசைப்படுத்துதல்.

#include <stdio.h>

void bubble_sort(int *a, int n) {
    for (int pass = 0; pass < n-1; pass++) {
        for (int i = 0; i < n-1-pass; i++) {
            if (a[i] > a[i+1]) {
                int t = a[i]; a[i] = a[i+1]; a[i+1] = t;
            }
        }
    }
}

int main(void) {
    int a[] = {5,1,4,2,8};
    int n = (int)(sizeof a / sizeof a[0]);
    bubble_sort(a, n);
    for (int i = 0; i < n; i++) printf("%d ", a[i]);
    printf("\n");
    return 0;
}
