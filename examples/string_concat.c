// string_concat.c
// EN: Join two strings without using strcat.
// SI: strcat නැතිව වචන දෙක එකට එක් කරනවා.
// TA: strcat இன்றி இரண்டு சரங்களை இணைத்தல்.

#include <stdio.h>

void my_strcat(char *dst, const char *src) {
    // move to end of dst
    while (*dst != '\0') dst++;
    // copy src including \0
    while ((*dst++ = *src++) != '\0') {
        ;
    }
}

int main(void) {
    char a[200] = "Hello";
    char b[] = " World";
    my_strcat(a, b);
    printf("%s\n", a);
    return 0;
}
