// file_count_lwc.c
// EN: Count lines, words, characters in a text file.
// SI: පෙළ ගොනුවක රේඛා, වචන, අක්ෂර ගණන් කරනවා.
// TA: உரை கோப்பில் வரிகள், சொற்கள், எழுத்துகளை எண்ணுங்கள்.

#include <stdio.h>
#include <ctype.h>

int main(void) {
    char name[128];
    printf("File name: ");
    if (!fgets(name, sizeof name, stdin)) return 0;
    for (char *p = name; *p; p++) if (*p=='\n') *p='\0';

    FILE *f = fopen(name, "r");
    if (!f) { perror("open"); return 1; }

    long lines = 0, words = 0, chars = 0;
    int c, in_word = 0;
    while ((c = fgetc(f)) != EOF) {
        chars++;
        if (c == '\n') lines++;
        if (isspace(c)) { if (in_word) { words++; in_word = 0; } }
        else in_word = 1;
    }
    if (in_word) words++;

    fclose(f);
    printf("Lines=%ld Words=%ld Chars=%ld\n", lines, words, chars);
    return 0;
}
