// reverse_string.c
// EN: Reverse characters in a string in place.
// SI: string එක තුළම අකුරු හරවාගන්නවා.
// TA: சரத்தின் எழுத்துக்களை இடத்திலேயே புரட்டுதல்.

#include <stdio.h>

void reverse(char *s) {
    int i = 0, j = 0;
    while (s[j] != '\0') j++;
    if (j > 0 && s[j-1] == '\n') j--; // remove newline
    j--;
    while (i < j) {
        char t = s[i]; s[i] = s[j]; s[j] = t;
        i++; j--;
    }
}

int main(void) {
    char s[128];
    printf("Enter text: ");
    if (fgets(s, sizeof s, stdin)) {
        reverse(s);
        printf("Reversed: %s\n", s);
    }
    return 0;
}
