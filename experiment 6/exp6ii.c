#include <stdio.h>
int GCD(num1,num2){
    if(num2==0){
      return num1;
    }else{
      return GCD(num2,num1%num2);
    }
}
int main(){
    int a,b,gcd;
    printf("Enter 1st number:");
    scanf("%d",&a);
    printf("Enter 2nd number:");
    scanf("%d",&b);
    gcd=GCD(a,b);
    printf("GCD=%d\n",gcd);
    return 0;
}
