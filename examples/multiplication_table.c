// multiplication_table.c
// EN: Print multiplication table for a number using a for loop.
// SI: for loop එකකින් සංඛ්‍යාවකට ගුණාකාර වගුව මුද්‍රණය කරනවා.
// TA: for சுற்றை கொண்டு ஒரு எண்ணின் பெருக்கப்பட்டியை அச்சிடுதல்.

#include <stdio.h>

int main(void) {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", n, i, n * i);
    }
    return 0;
}
