#include<stdio.h>
int main(){
    int n,rev=0,rem,copy_n;
    printf("Enter Number : ");
    scanf("%d",&n);
    copy_n = n; // create a copy
    while(n!=0){
        rem = n%10;
        rev = rev *10 + rem;
        n=n/10;
    }

    if(copy_n == rev){
        printf("%d is PALINDROME. \n",copy_n);
    }
    else{
        printf("%d is NOT PALINDROME. \n",copy_n);
    }
    return 0;
}