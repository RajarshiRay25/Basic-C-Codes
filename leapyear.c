#include<stdio.h>
int main(){
    int year;
    printf("INPUT YEAR : ");
    scanf("%d",&year);
    if((year%4 == 0 && year%100 != 0) || (year%400 == 0))
    {
        printf("LEAP YEAR -> %d",year);
    }
    else{
        printf("NOT LEAP YEAR -> %d",year);
    }
    return 0;
}