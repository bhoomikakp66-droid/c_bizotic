#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main() {
    char str1[100], str2[100];
    int freq1[26] = {0}, freq2[26] = {0};
    int i, flag = 1;

    fgets(str1, sizeof(str1), stdin);
    fgets(str2, sizeof(str2), stdin);

    for(i = 0; str1[i] != '\0'; i++) {
        if(str1[i] != ' ' && str1[i] != '\n') {
            char ch = tolower(str1[i]);

            if(ch >= 'a' && ch <= 'z') {
                freq1[ch - 'a']++;
            }
        }
    }

    for(i = 0; str2[i] != '\0'; i++) {
        if(str2[i] != ' ' && str2[i] != '\n') {
            char ch = tolower(str2[i]);

            if(ch >= 'a' && ch <= 'z') {
                freq2[ch - 'a']++;
            }
        }
    }

    for(i = 0; i < 26; i++) {
        if(freq1[i] != freq2[i]) {
            flag = 0;
            break;
        }
    }

    if(flag == 1) {
        printf("ANAGRAMS");
    }
    else {
        printf("NOT ANAGRAMS");
    }

    return 0;
}