#include<stdio.h>
int main(){
    int n;
    printf("enter the number of students");
    scanf("%d",&n);
     
    char name[50];
    int attendence,total;
    float percentage;

    for(int i=0;i<n;i++){
        print("\n enter name, class_attendend , total_classes:");
        scanf("%s %d %d ,name, &class_attendend,&total_classes");
        percentage=(float(classes_attended / total_classes) * 100 );

        if(percentage>=75.0){
            printf("%s ELIGIBLE\n",name);
        }
        else{
            printf("%s NOT_ELIGIBLE\n , name");
        }
    }
}