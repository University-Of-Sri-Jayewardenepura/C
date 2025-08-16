// file_copy.c
// EN: Copy contents from one file to another.
// SI: ගොනුවක අන්තර්ගතය තවත් ගොනුවකට පිටපත් කරන්න.
// TA: ஒரு கோப்பிலிருந்து மற்றொரு கோப்பிற்கு உள்ளடக்கத்தை நகலெடுக்கவும்.

#include <stdio.h>

int main(void) {
    char src[128], dst[128];
    printf("Source file: "); fgets(src, sizeof src, stdin);
    printf("Destination file: "); fgets(dst, sizeof dst, stdin);
    // remove newlines
    for (char *p = src; *p; p++) if (*p=='\n') *p='\0';
    for (char *p = dst; *p; p++) if (*p=='\n') *p='\0';

    FILE *in = fopen(src, "r");
    if (!in) { perror("open src"); return 1; }
    FILE *out = fopen(dst, "w");
    if (!out) { perror("open dst"); fclose(in); return 1; }

    int c;
    while ((c = fgetc(in)) != EOF) fputc(c, out);

    fclose(in); fclose(out);
    printf("Copied.\n");
    return 0;
}
