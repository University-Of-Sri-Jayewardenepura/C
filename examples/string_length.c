// string_length.c
// EN: Count characters in a string (until \0) without using strlen.
// SI: strlen නැතුව ඉදිරියට යද්දී \0 දක්වා අක්ෂර ගණන් කරනවා.
// TA: strlen இன்றி \0 வரையில் எழுத்துக்களை எண்ணுதல்.

#include <stdio.h>

int my_strlen(const char *s) {
    int c = 0;
    while (s[c] != '\0') c++;
    return c;
}

int main(void) {
    char text[100];
    printf("Enter text: ");
    if (fgets(text, sizeof text, stdin)) {
        // remove newline if present
        int len = my_strlen(text);
        if (len > 0 && text[len-1] == '\n') text[len-1] = '\0';
        printf("Length = %d\n", my_strlen(text));
    }
    return 0;
}
