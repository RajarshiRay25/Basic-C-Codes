#include<stdio.h>
int address_call(int num,int* ptr){
    printf("Enter Number : ");
    scanf("%d",&num);
    ptr = &num;
    printf("CALL BY ADDRESS. \n");
    printf("The Number Address is : %d \n",ptr);
    printf("The Number is : %d \n",*ptr);
}

int value_call(int num){
    printf("Enter Number : ");
    scanf("%d",&num);
    printf("CALL BY VALUE. \n");
    printf("The Number is : %d \n",num);
}
int main(){
    int num;
    int* ptr;
    address_call(num,ptr); // call by address
    value_call(num);       // call by value
    return 0;
}