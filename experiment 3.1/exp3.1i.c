#include <stdio.h>

int main(){
    int l1,l2,l3;
    printf("Enter length 1 of triangle:");
    scanf("%d",&l1);
    printf("Enter length 2 of triangle:");
    scanf("%d",&l2);
    printf("Enter length 3 of triangle:");
    scanf("%d",&l2);

    if ((l1+l2)>l3 && (l2+l3)>l1 &&(l1+l3)>l2){
        printf("Valid");
    }
    else{
        printf("Invalid");
    }

    if((l1==l2)&&(l2==l3)){
        printf("Equilateral");
    }
    else if((l1*l1+l2*l2==l3*l3)||(l2*l2+l3*l3==l1*l1)||(l1*l1+l3*l3==l2*l2)){
        printf("Right");
    }
    else if((l1==l2)||(l2==l3)||(l3==l1)){
        printf("Isoceles");
    }
    else{
        printf("Scalene");
    }
    return 0;
}
