#include<stdio.h>
int main(){
    int lim,i;
    int arr[5];
    for(i=0;i<5;i++){
        printf("Enter %d element : \n",i);
        scanf("%d",&arr[i]);
    }
    for(i=0;i<5;i++){
        printf("Elements are : %d \n",arr[i]);
    }
    return 0;
}