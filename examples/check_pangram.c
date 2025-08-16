// check_pangram.c
// EN: Check if a sentence contains all English letters a..z at least once.
// SI: වාක්‍යයක a..z සියලුම අකුරු එක් වාරයකටවත් ඇත්ද බලනවා.
// TA: ஒரு வாக்கியத்தில் a..z அனைத்து எழுத்துகளும் குறைந்தது ஒருமுறை உள்ளது எனச் சரிபார்க்கவும்.

#include <stdio.h>

int main(void) {
    int seen[26] = {0};
    char s[512];
    printf("Enter a sentence: ");
    if (!fgets(s, sizeof s, stdin)) return 0;
    for (int i = 0; s[i] != '\0'; i++) {
        char c = s[i];
        if (c >= 'A' && c <= 'Z') c = (char)(c - 'A' + 'a');
        if (c >= 'a' && c <= 'z') seen[c - 'a'] = 1;
    }
    int all = 1;
    for (int i = 0; i < 26; i++) if (!seen[i]) { all = 0; break; }
    printf(all ? "Pangram\n" : "Not a pangram\n");
    return 0;
}
