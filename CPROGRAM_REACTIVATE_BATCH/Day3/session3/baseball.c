#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
    int n;
    printf("enter the number");
    scanf("%d",&n);

    char operations[n][10];

    for(int i=0;i<n;i++){
        scanf("%s",operations[i]);
    }
    int stack[n];
    int top=-1;

    for(int i=0;i<n;i++){
        if(strcmp(operations[i],"+" )==0 ){
            int val=stack[top]+stack[top-1];
        }
        else if(strcmp(operations[i],"D")==0){
            stack[++top]=2*stack[top];
        }
        else if(strcmp(operations[i],"c")==0){
            top--;
        }
        else{
            stack[++top]=atoi(operations[i]);
        }
    }
    








}