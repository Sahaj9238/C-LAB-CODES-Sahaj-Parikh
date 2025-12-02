#include <stdio.h>
void modify(int *a,int *b){
    *a=*a+10;
    *b=b+20;
}
int main(){
    int x=5,y=7;
    printf("Before modification:x=%d,y=%d\n",x,y);
    modify(x,y);
    printf("After modification:x=%d,y=%d\n",x,y);
    return 0;
}