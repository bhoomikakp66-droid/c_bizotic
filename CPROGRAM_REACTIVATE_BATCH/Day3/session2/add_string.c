#include <stdio.h>
#include <string.h>

int main() {
    char num1[100], num2[100];
    char result[200];

    int i, j, k;
    int carry = 0, sum;

    printf("Enter first number: ");
    scanf("%s", num1);

    printf("Enter second number: ");
    scanf("%s", num2);

    i = strlen(num1) - 1;
    j = strlen(num2) - 1;
    k = 0;

    
    while (i >= 0 || j >= 0 || carry > 0) {
        int digit1 = 0, digit2 = 0;

        if (i >= 0) {
            digit1 = num1[i] - '0';
            i--;
        }

        if (j >= 0) {
            digit2 = num2[j] - '0';
            j--;
        }

        sum = digit1 + digit2 + carry;

        result[k] = (sum % 10) + '0';
        carry = sum / 10;

        k++;
    }

    result[k] = '\0';


    for (int l = 0; l < k / 2; l++) {
        char temp = result[l];
        result[l] = result[k - l - 1];
        result[k - l - 1] = temp;
    }

    printf("Sum = %s\n", result);

    return 0;
}