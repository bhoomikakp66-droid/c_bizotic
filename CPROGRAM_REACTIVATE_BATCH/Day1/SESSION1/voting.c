#include<stdio.h>

int main(){

    int N = 5;
    int map[6] = {0};
    int valid = 0, invalid = 0;
    int NumberOfVote, vote;

    printf("Enter the number of Votes: ");
    scanf("%d", &NumberOfVote);

    for(int i = 0; i < NumberOfVote; i++){
        scanf("%d", &vote);

        if(vote >= 1 && vote <= N){
            map[vote]++;
            valid++;
        }
        else{
            invalid++;
        }
    }

    for(int i = 1; i <= 5; i++){
        printf("Candidate %d: %d\n", i, map[i]);
    }

    if(valid == 0){
        printf("WINNER: NO VOTES\n");
    }

    else{
        int winner = 1;

        for(int i = 2; i <= 5; i++){
            if(map[i] > map[winner]){
                winner = i;
            }
        }

        printf("WINNER: CANDIDATE %d\n", winner);
    }

    printf("TOTAL VALID: %d\n", valid);
    printf("INVALID: %d\n", invalid);

    return 0;
}