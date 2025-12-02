#include<stdio.h>
typedef struct complex{
    float real;
    float imag;
}complex;
complex add(complex n1,complex n2);
complex sub(complex n1,complex n2);
int main(){
    complex n1,n2,result,b;
    printf("For 1st complex number:\n");
    printf("Enter ther real and imaginary parts:");
    scanf("%f %f",&n1.real,&n1.imag);
    printf("For 2nd complex number:\n");
    printf("Enter ther real and imaginary parts:");
    scanf("%f %f",&n2.real,&n2.imag);
    result=add(n1,n2);
    b=sub(n1,n2);
    printf("Sum=%.1f+%.1f",result.real,result.imag);
    printf("Difference=%.1f+%.1f",b.real,b.imag);
    return 0;
}
complex add(complex n1,complex n2){
    complex temp;
    temp.real=n1.real+n2.real;
    temp.imag=n1.imag+n2.imag;
    return (temp);
}

complex sub(complex n1,complex n2){
    complex c;
    c.real=n1.real-n2.real;
    c.imag=n1.imag-n2.imag;
    return(c);
}
