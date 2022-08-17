#include<stdio.h>
#include<math.h>
int gcd_get(int n1,int n2){
    int result = fmin(n1,n2); // returns min of two no.s
    while(result>0){
        if(n1 % result == 0 && n2 %result == 0){
            break;
        }
        result--;
    }
    return result;
}
int main(){
    int num1,num2,gcd_res;
    printf("ENTER NUMBERS --> \n");
    scanf("%d %d",&num1,&num2);
    gcd_res=gcd_get(num1,num2);
    printf("GCD OF %d and %d is = %d",num1,num2,gcd_res);
    return 0;
}