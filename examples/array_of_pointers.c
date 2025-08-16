// array_of_pointers.c
// EN: Array holding pointers to strings.
// SI: වචන pointer එකතු අඩංගු අරේ එක.
// TA: சரங்களுக்கு பாயிண்டர்கள் உள்ள வரிசை.

#include <stdio.h>

int main(void) {
    const char *words[] = {"cat", "dog", "bird"};
    for (int i = 0; i < 3; i++) printf("%s ", words[i]);
    printf("\n");
    return 0;
}
