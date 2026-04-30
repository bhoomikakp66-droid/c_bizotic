#include<stdio.h>
#include<string.h>

int findUniqueSubstringofSize3(char s[]){
    int n=strlen(s);
    int count=0;
    if(n<3){
        return 0;
    }

    for(int i=0;i<=n-3;i++){
        char a=s[i];
        char b=s[i+1];
        char c=s[i+2];

        if(a != b && b!= c && a!=c){
            count++;

        }

    }
    printf("Number of good substrings : %d",count);
    return 0;
}