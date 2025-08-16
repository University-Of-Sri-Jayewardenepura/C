// remove_vowels.c
// EN: Remove vowels (a, e, i, o, u) from a string.
// SI: string එකකින් ස්වර අකුරු ඉවත් කරනවා.
// TA: ஒரு சரத்தில் இருந்து உயிரெழுத்துகளை அகற்று.

#include <stdio.h>

int is_vowel(char c) {
    switch (c) {
        case 'a': case 'e': case 'i': case 'o': case 'u':
        case 'A': case 'E': case 'I': case 'O': case 'U':
            return 1;
        default: return 0;
    }
}

void remove_vowels(char *s) {
    int w = 0;
    for (int r = 0; s[r] != '\0'; r++) {
        if (!is_vowel(s[r])) s[w++] = s[r];
    }
    s[w] = '\0';
}

int main(void) {
    char s[256];
    printf("Enter text: ");
    if (fgets(s, sizeof s, stdin)) {
        remove_vowels(s);
        printf("No vowels: %s\n", s);
    }
    return 0;
}
