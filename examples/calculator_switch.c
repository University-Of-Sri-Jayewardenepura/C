// calculator_switch.c
// EN: Simple + - * / calculator using switch.
// SI: switch case භාවිතා කර සරල + - * / කල්කියුලේටරයක්.
// TA: switch வழியாக எளிய + - * / கணக்குப்பொறி.

#include <stdio.h>

int main(void) {
    double a,b; char op;
    printf("Enter: a op b (e.g., 3 + 4): ");
    if (scanf("%lf %c %lf", &a, &op, &b) != 3) return 0;
    switch (op) {
        case '+': printf("%.2f\n", a+b); break;
        case '-': printf("%.2f\n", a-b); break;
        case '*': printf("%.2f\n", a*b); break;
        case '/': if (b==0) printf("Division by zero!\n"); else printf("%.2f\n", a/b); break;
        default: printf("Unknown operator.\n");
    }
    return 0;
}
