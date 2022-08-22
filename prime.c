#include<stdio.h>
int main(){
    int i,num;
    int isPrime = 1;
    printf("Enter Number : \n");
    scanf("%d",&num);
    for(i=2;i<num;i++){
        if(num%2==0){
            isPrime = 0;
        }
    }

    if (isPrime == 1){
        printf("PRIME NUMBER : %d",num);
    }
    else{
        printf("NOT PRIME! \n");
    }
    return 0;
}