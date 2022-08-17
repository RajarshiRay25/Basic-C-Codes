#include<stdio.h>
long fact(int num){
    if (num == 0){
        return 1;
    }
    else{
        return(num*fact(num-1));
    }
}
int main(){
    int num;
    long factorial_num;
    printf("ENTER NUMBER : \n");
    scanf("%d",&num);
    factorial_num = fact(num);
    printf("FACTORIAL OF %d is %d",num,factorial_num);
    return 0;
}