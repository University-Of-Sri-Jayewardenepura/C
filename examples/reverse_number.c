// reverse_number.c
// EN: Reverse digits of a positive number using a while loop.
// SI: while loop එකකින් ධන අංකයක ඉලක්කම් හරවාගන්නවා.
// TA: while சுற்றை கொண்டு ஒரு நேர்ம எண்ணின் இலக்கங்களை திருப்புவது.

#include <stdio.h>

int main(void) {
    int n;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    if (n < 0) {
        printf("Please enter positive number.\n");
        return 0;
    }
    int rev = 0;
    while (n > 0) {
        int d = n % 10; // last digit
        rev = rev * 10 + d;
        n /= 10;
    }
    printf("Reversed = %d\n", rev);
    return 0;
}
