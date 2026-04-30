#include <stdio.h>

int main() {
    int income;
    float tax = 0;

    scanf("%d", &income);

    if (income <= 250000) {
        tax = 0;
    }
    else if (income <= 500000) {
        tax = (income - 250000) * 0.05;
    }
    else if (income <= 1000000) {
        tax = 12500 + (income - 500000) * 0.20;
    }
    else {
        tax = 112500 + (income - 1000000) * 0.30;
    }

    printf("TAX: %.0f", tax);

    return 0;
}