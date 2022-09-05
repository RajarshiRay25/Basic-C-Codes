#include<stdio.h>
int main(){
    int sum=0,dig,num,copy;
    printf("Enter Number : \n");
    scanf("%d",&num);
    copy = num;  // stores the copy 
    while(num!=0){
        dig = num%10;
        sum = sum + dig;
        num = num/10;
    }
    printf("Sum of digits of %d = %d",copy,sum);
    return 0;
}