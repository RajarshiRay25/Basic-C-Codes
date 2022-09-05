#include<stdio.h>
int main(){
    int arr[2][2],i,j;
    printf("Value Input : \n");
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            printf("Enter Value for %d row,%d col \n",i+1,j+1);
            scanf("%d",&arr[i][j]);
        }
    }

    printf("Value output : \n");
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            printf("Element of row %d and column %d is : %d \n",i+1,j+1,arr[i][j]);
        }
    }
    return 0;
}