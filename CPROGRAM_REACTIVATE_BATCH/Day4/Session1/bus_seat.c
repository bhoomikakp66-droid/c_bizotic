#include<stdio.h>
int main(){
    int S,B;//s->total number of seats  b->number of booked seats
    scanf("%d %d",&S,&B);
    int booked[B];//store all the booked seats
    for(int i=0;i<B;i++){
        scanf("%d",&booked[i]);      
    }
    int low = 0, high = B - 1;
    int answer = -1;

    while(low <= high) {
        int mid = (low + high) / 2;
        if(booked[mid] == mid + 1) {
            low = mid + 1;
        } else {
            answer = mid + 1;
            high = mid - 1;
        }
    }
     if(answer == -1) {
        answer = low + 1;
    }
    
    if(answer > S) {
        printf("FULL");
    } else {
        printf("FIRST AVAILABLE: %d", answer);
    }

    return 0;
}
