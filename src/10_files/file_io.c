#include <stdio.h>
#include <stdlib.h>

int main(void) {
    // Write a file
    FILE* out = fopen("example.txt", "w");
    if (!out) {
        perror("fopen for write");
        return 1;
    }
    fprintf(out, "Hello file!\n");
    fclose(out);

    // Read the file
    FILE* in = fopen("example.txt", "r");
    if (!in) {
        perror("fopen for read");
        return 1;
    }
    char buf[64];
    if (fgets(buf, sizeof buf, in)) {
        printf("Read: %s", buf);
    }
    fclose(in);

    return 0;
}
