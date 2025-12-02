#include <stdio.h>
int main(){
    int a=22;
    int *p=&a;
    printf("p=%p\n",p);
    printf("p++=%u\n",p++);
    printf("p--=%u\n",p--);
    float b=3.14;
    float *q=&b;
    printf("q=%p\n",q);
    printf("q++=%u\n",q++);
    printf("q--=%u\n",q--);
    char c='a';
    char *r=&c;
    printf("r=%p\n",r);
    printf("r++=%u\n",r++);
    printf("r--=%u\n",r--);
    return 0;
}