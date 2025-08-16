#include <stdio.h>
#include <string.h>

int is_palindrome(const char* s) {
    size_t i = 0, j = strlen(s);
    if (j == 0) return 1;
    j--; // last char index
    while (i < j) {
        if (s[i] != s[j]) return 0;
        i++; j--;
    }
    return 1;
}

int main(void) {
    char name[32];
    printf("Enter your name: ");
    if (fgets(name, sizeof name, stdin)) {
        // strip newline if present
        size_t len = strlen(name);
        if (len > 0 && name[len-1] == '\n') name[len-1] = '\0';
        printf("Hello, %s!\n", name);
    }

    const char* s1 = "level";
    printf("%s is %sa palindrome\n", s1, is_palindrome(s1) ? "" : "not ");

    char dest[64] = "Hello";
    strcat(dest, ", world");
    printf("%s (len=%zu)\n", dest, strlen(dest));

    return 0;
}
