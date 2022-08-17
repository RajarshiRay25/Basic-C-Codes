#include<stdio.h>
int main(){
    int n,rem,sum=0,copy_n;
    printf("Enter Number : ");
    scanf("%d",&n);
    copy_n = n;
    while(n>0){
        rem = n%10;
        sum = sum + (rem*rem*rem);
        n =n/10;
    }
    if(copy_n == sum){
        printf("%d is ARMSTRONG. \n",copy_n);
    }
    else{
        printf("%d is NOT ARMSTRONG. \n",copy_n);
    }
    return 0;
}