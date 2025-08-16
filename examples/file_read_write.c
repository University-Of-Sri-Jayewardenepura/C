// file_read_write.c
// EN: Write text to a file and read it back.
// SI: ගොනුවකට පාඨයක් ලියා නැවත කියවන්න.
// TA: ஒரு கோப்பில் எழுதி மீண்டும் படிக்கவும்.

#include <stdio.h>

int main(void) {
    FILE *f = fopen("sample.txt", "w");
    if (!f) { perror("fopen write"); return 1; }
    fprintf(f, "Hello file!\n");
    fclose(f);

    f = fopen("sample.txt", "r");
    if (!f) { perror("fopen read"); return 1; }
    char buf[64];
    while (fgets(buf, sizeof buf, f)) {
        printf("%s", buf);
    }
    fclose(f);
    return 0;
}
