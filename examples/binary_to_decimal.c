// binary_to_decimal.c
// EN: Convert a binary string like 1011 to decimal.
// SI: 1011 වගේ බයිනරි පාඨය ඩෙසਿਮල්ට.
// TA: 1011 போன்ற இரும புலத்தை தசமமாக மாற்றுதல்.

#include <stdio.h>

int main(void) {
    char s[128];
    printf("Enter binary: ");
    if (!fgets(s, sizeof s, stdin)) return 0;
    int val = 0;
    for (int i = 0; s[i] != '\0' && s[i] != '\n'; i++) {
        if (s[i] == '0' || s[i] == '1') {
            val = val * 2 + (s[i] - '0');
        }
    }
    printf("Decimal = %d\n", val);
    return 0;
}
