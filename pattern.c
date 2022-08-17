#include<stdio.h>
int main(){
    int limit;
    printf("ENTER LIMIT : ");
    scanf("%d",&limit);
    for(int i=0;i<=limit;i++){
        for(int j=0;j<=i;j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}