#include <stdio.h>
int main(){
    int a=10;
    int *ptr1=&a;
    float b=3.14;
    float *ptr2=&b;
    char c='A';
    char *ptr3=&c;
    printf("Integer Variable:\n");
    printf("Value=%d\n",a);
    printf("Address=%p\n",&a);
    printf("Integer Pointer:\n");
    printf("Value=%p\n",ptr1);
    printf("Value pointed=%d\n",*ptr1);

    printf("Float Variable:\n");
    printf("Value=%f\n",b);
    printf("Address=%p\n",&b);
    printf("Float Pointer:\n");
    printf("Value=%p\n",ptr2);
    printf("Value pointed=%f\n",*ptr2);

    printf("Character Variable:\n");
    printf("Value=%c\n",c);
    printf("Address=%p\n",&c);
    printf("Character Pointer:\n");
    printf("Value=%p\n",ptr3);
    printf("Value pointed=%c\n",*ptr3);
    return 0;
}
