#include <stdio.h>
#include <math.h>
int ISPRIME(int num){
    if(num<=1){
        return 0;
    } if (num==2){
        return 1;
    } if (num%2==0){
        return 0;
    }
    for(int i=3;i<=sqrt(num);i+=2){
        if(num%i==0){
            return 0;
        }
    }
    return 1;
}
int main(){
    int low,up;
    printf("Enter the lower limit:");
    scanf("%d",&low);
    printf("Enter the upper limit:");
    scanf("%d",&up);
    printf("Prime Numbers=\n");
    for(int i=low;i<=up;i++){
        if(ISPRIME(i)){
            printf("%d ",i);
        }
    }
    printf("\n");
    return 0;
}