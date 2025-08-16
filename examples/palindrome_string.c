// palindrome_string.c
// EN: Check if a word reads the same backward.
// SI: වචනයක් අකුරු හරවාගෙනත් එකම දේද බලනවා.
// TA: ஒரு சொல் முன்பும் பின்னும் ஒன்றாக இருக்கிறதா என்று பார்க்கிறோம்.

#include <stdio.h>

int is_palindrome(const char *s) {
    int i = 0, j = 0;
    while (s[j] != '\0') j++;
    if (j > 0 && s[j-1] == '\n') j--; // trim newline
    j--;
    while (i < j) {
        if (s[i] != s[j]) return 0;
        i++; j--;
    }
    return 1;
}

int main(void) {
    char text[100];
    printf("Enter a word: ");
    if (fgets(text, sizeof text, stdin)) {
        if (is_palindrome(text)) printf("Palindrome\n");
        else printf("Not a palindrome\n");
    }
    return 0;
}
