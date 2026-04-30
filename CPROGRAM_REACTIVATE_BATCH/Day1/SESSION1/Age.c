#include <stdio.h>

int main() {
    int age;

    scanf("%d", &age);

    if (age < 0 || age > 150) {
        printf("INVALID");
    }
    else if (age <= 12) {
        printf("CHILD");
    }
    else if (age <= 19) {
        printf("TEEN");
    }
    else if (age <= 59) {
        printf("ADULT");
    }
    else {
        printf("SENIOR");
    }

    return 0;
}