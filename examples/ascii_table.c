// ascii_table.c
// EN: Print ASCII codes and characters using a while loop.
// SI: while loop එකක් භාවිතා කර ASCII කේත හා අක්ෂර මුද්‍රණය කරනවා.
// TA: while சுற்றை பயன்படுத்தி ASCII குறியீடுகள் மற்றும் எழுத்துகளை அச்சிடுதல்.

#include <stdio.h>

int main(void) {
    int i = 32; // EN: start from space; SI/TA: හිස් ඉඩ/வெற்று இடம்
    while (i <= 126) { // EN: printable range
        printf("%3d -> %c\n", i, (char)i);
        i++;
    }
    return 0;
}
