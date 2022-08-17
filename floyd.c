#include<stdio.h>
int main(){
    int i,j,n;
    int k=1;
    printf("Enter Limit : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            printf("%d \t",k++);
        }
        printf("\n");
    }
    return 0;
}