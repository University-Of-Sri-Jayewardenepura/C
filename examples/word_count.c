// word_count.c
// EN: Count words in a line (separated by spaces).
// SI: වචන ගණන් කරනවා (හිස් ඉඩ මගින් වෙන්වී).
// TA: இடைவெளிகளால் பிரிக்கப்பட்ட சொற்களைக் எண்ணுதல்.

#include <stdio.h>

int main(void) {
    char s[256];
    printf("Enter a line: ");
    if (!fgets(s, sizeof s, stdin)) return 0;

    int words = 0, in_word = 0;
    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] == ' ' || s[i] == '\n' || s[i] == '\t') {
            if (in_word) { words++; in_word = 0; }
        } else {
            in_word = 1;
        }
    }
    // handle last word if line didn't end with space
    if (in_word) words++;

    printf("Words = %d\n", words);
    return 0;
}
