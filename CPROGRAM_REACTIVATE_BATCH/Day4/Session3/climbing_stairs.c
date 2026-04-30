int climbingstairs(int n){
    if(n==0||n==1){
        return1;
    }
    return climbingStairs(n-1)+climbingstairs(n-2);
}

int main(){
    int N=4;
    printf("%d",climbingStairs(N));
}