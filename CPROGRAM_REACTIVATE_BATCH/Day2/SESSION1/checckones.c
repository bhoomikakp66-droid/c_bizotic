#include<stdio.h>

int main(){
    int N;
    printf("Enter the N");
    scanf("%d", &N);
    int arr[N];
    for (int i = 0; i < N; i++)
    {
    scanf("%d", &arr[i]);
    }
    int count=0,maxCount=0;

    for (int i = 0; i < N; i++)
    {
    if(arr[i]==1){
        count++;
    }
    else{
        if(count>maxCount){
            maxCount=count;
        }
        else{
        count=0;
    }
}
}
printf("Max count of 1 is %d", maxCount);
}