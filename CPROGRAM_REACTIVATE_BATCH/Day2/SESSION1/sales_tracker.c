#include <stdio.h>

int main() {
    int n;

    scanf("%d", &n);

    if (n == 0) {
        printf("NO DATA\n");
        return 0;
    }

    int sales[n];
    int max, min, total = 0;
    float avg    int aboveAvg = 0;

    scanf("%d", &sales[0]);
    max = min = sales[0];
    total = sales[0];

    for (int i = 1; i < n; i++) {
        scanf("%d", &sales[i]);

        if (sales[i] > max)
            max = sales[i];

        if (sales[i] < min)
            min = sales[i];

        total += sales[i];
    }


    avg = (float)total / n;


    for (int i = 0; i < n; i++) {
        if (sales[i] > avg)
            aboveAvg++;
    }

    printf("MAX: %d\n", max);
    printf("MIN: %d\n", min);
    printf("TOTAL: %d\n", total);
    printf("AVG: %.2f\n", avg);
    printf("ABOVE AVG: %d\n", aboveAvg);

    return 0;
}