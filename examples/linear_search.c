// linear_search.c
// EN: Look for a number in an array by checking one by one.
// SI: අංකයක් අරේ එකක තිබේද කියලා එකින් එක බලනවා.
// TA: வரிசையில் ஒரு எண்ணை ஒன்றன்பின் ஒன்றாகச் சோதிக்கிறோம்.

#include <stdio.h>

int main(void) {
    int a[] = {10, 20, 30, 40, 50};
    int n = (int)(sizeof a / sizeof a[0]);
    int key = 30;
    int found = -1;
    for (int i = 0; i < n; i++) {
        if (a[i] == key) { found = i; break; }
    }
    if (found >= 0) printf("Found at index %d\n", found);
    else printf("Not found\n");
    return 0;
}
