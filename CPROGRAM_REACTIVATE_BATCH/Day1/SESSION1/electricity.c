#include <stdio.h>

int main() {
    int units, bill = 0;

    scanf("%d", &units);

    if (units <= 100) {
        bill = units * 2;
    }
    else if (units <= 300) {
        bill = (100 * 2) + ((units - 100) * 4);
    }
    else if (units <= 500) {
        bill = (100 * 2) + (200 * 4) + ((units - 300) * 6);
    }
    else {
        bill = (100 * 2) + (200 * 4) + (200 * 6) + ((units - 500) * 10);
    }

    printf("BILL: %d", bill);

    return 0;
}