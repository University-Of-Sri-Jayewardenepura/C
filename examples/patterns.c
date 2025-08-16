// patterns.c
// EN: Print a simple pyramid using nested loops.
// SI: nested loops භාවිතා කර සරල පිරමීඩයක් මුද්‍රණය කරනවා.
// TA: உட்பொருத்தப்பட்ட சுற்றுகளைப் பயன்படுத்தி எளிய பரமிட் அச்சிடுதல்.

#include <stdio.h>

int main(void) {
    int rows;
    printf("Enter number of rows: ");
    scanf("%d", &rows);

    for (int i = 1; i <= rows; i++) {
        for (int s = 0; s < rows - i; s++) printf(" ");
        for (int j = 0; j < (2 * i - 1); j++) printf("*");
        printf("\n");
    }
    return 0;
}
