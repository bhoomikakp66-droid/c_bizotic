#include<stdio.h>
#include<string.h>

struct phoneList{
    char name[50];
    char phone[20];
};

int binarySearch(struct phoneList dir[],int n,char key[]){
    int low=0,high=n-1;

    while(low<=high){
        int mid =(low+high)/2;
        int cmp =strcmp(dir[mid].name,key);

        if (cmp==0){
            return mid;
        }
        else if (cmp<0){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    return -1;
}

int main(){
    int n,q;
    printf("Enter number of entries:");
    scanf("%d",&n);

    struct phoneList dir[n];

    printf("Enter name phone (sorted by name):\n");
    for(int i=0;i<n;i++){
        scanf("%s %s",dir[i].name,dir[i].phone);
    }

    printf("Enter number of queries:");
    scanf("%d",&q);

    while(q--){
        char query[50];
        printf("Enter name to search:");
        scanf("%s",query);

        int index=binarySearch(dir,n,query);

        if(index != -1){
            printf("FOUND:%s %s \n",dir[index].name,dir[index].phone);
        }
        else{
            printf("NOT FOUND:%s\n",query);
        }
    }
    return 0;
} 