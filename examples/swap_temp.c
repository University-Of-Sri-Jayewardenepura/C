// swap_temp.c
// EN: Swap two numbers using a temporary variable.
// SI: තාවකාලික චලකයක් භාවිතා කර නම්බර් දෙකක් හුවමාරු කරනවා.
// TA: தற்காலிக மாறியை பயன்படுத்தி இரண்டு எண்களை மாற்றிக்கொள்வது.

#include <stdio.h>

int main(void) {
    int a, b, temp;
    printf("Enter two integers (a b): ");
    scanf("%d %d", &a, &b);

    // EN: temp holds a, then we move b into a, and temp into b.
    // SI: temp තුළ a තබලා, පසුව b → a, temp → b කරලා හුවමාරු කරනවා.
    // TA: temp இல் a வை வைத்து, பிறகு b ஐ a க்கு, temp ஐ b க்கு வைக்கிறோம்.
    temp = a;
    a = b;
    b = temp;

    printf("After swap: a=%d, b=%d\n", a, b);
    return 0;
}
