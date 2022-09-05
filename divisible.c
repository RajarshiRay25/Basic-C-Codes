#include<stdio.h>
int main(){
    int i,num;
    printf("Enter Number : ");
    scanf("%d",&num);
    for(i=0;i<=100;i++){
        if(i%num == 0){
            printf("%d is divisible by %d \n",i,num);
        }
    }
    return 0;
}