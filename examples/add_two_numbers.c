// add_two_numbers.c
// EN: A function that adds two numbers and returns the sum.
// SI: අංක දෙක එකතු කර ප්‍රතිඵලය ආපසු දෙන function එකක්.
// TA: இரண்டு எண்களை கூட்டி பெறுபேறை வழங்கும் செயல்பாடு.

#include <stdio.h>

int add(int a, int b) { return a + b; }

int main(void) {
    printf("add(3,4) = %d\n", add(3,4));
    return 0;
}
