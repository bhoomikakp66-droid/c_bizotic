#include <stdio.h>

int main() {
    int a[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    int i, j, temp;

    for (i = 0; i < 3; i++) {
        for (j = i + 1; j < 3; j++) {
            temp = a[i][j];
            a[i][j] = a[j][i];
            a[j][i] = temp;
        }
    }

    for (i = 0; i < 3; i++) {
        temp = a[i][0];
        a[i][0] = a[i][2];
        a[i][2] = temp;
    }

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}