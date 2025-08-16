// guess_number.c
// EN: Simple guessing: we compare your number to a secret number.
// SI: ලුහුබැඳීමක්: ඔබේ අංකය රහස් අංකය සමඟ සසදනවා.
// TA: ஒரு எண் ஊகிக்க: உங்கள் எண்ணை ரகசிய எண்ணுடன் ஒப்பிடுகிறோம்.

#include <stdio.h>

int main(void) {
    const int secret = 7; // EN/SI/TA: Secret number.
    int guess;

    printf("Guess the number (between 1 and 10): ");
    scanf("%d", &guess);

    if (guess == secret) {
        printf("Correct!\n");
    } else if (guess < secret) {
        printf("Too small!\n");
    } else {
        printf("Too big!\n");
    }

    return 0;
}
