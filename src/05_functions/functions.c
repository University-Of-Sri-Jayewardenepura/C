#include <stdio.h>

// Function declarations (prototypes)
int add(int a, int b);
void greet(const char* name);

int main(void) {
    int s = add(2, 3);
    printf("add(2,3) = %d\n", s);

    greet("Student");
    return 0;
}

// Definitions
int add(int a, int b) {
    return a + b; // pass-by-value
}

void greet(const char* name) {
    printf("Hello, %s!\n", name);
}
