#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char password[100];
    int hasLower = 0, hasUpper = 0, hasDigit = 0, hasSpecial = 0;
    int i, len;

    printf("Enter password: ");
    scanf("%s", password);

    len = strlen(password);

    for(i = 0; i < len; i++) {
        if(islower(password[i])) {
            hasLower = 1;
        }
        else if(isupper(password[i])) {
            hasUpper = 1;
        }
        else if(isdigit(password[i])) {
            hasDigit = 1;
        }
        else if(password[i] == '!' || password[i] == '@' ||
                password[i] == '#' || password[i] == '$' ||
                password[i] == '%') {
            hasSpecial = 1;
        }
    }

    if(len < 6) {
        printf("WEAK");
    }
    else if(len >= 12 && hasLower && hasUpper && hasDigit && hasSpecial) {
        printf("VERY STRONG");
    }
    else if(len >= 8 && hasDigit && hasUpper) {
        printf("STRONG");
    }
    else {
        printf("MEDIUM");
    }

    return 0;
}