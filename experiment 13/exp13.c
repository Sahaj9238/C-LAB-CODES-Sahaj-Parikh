#include <stdio.h>
#define add(x,y) ((x)+(y))
#define sub(x,y) ((x)-(y))
#define mult(x,y) ((x)*(y))
#define divide(x,y) ((x)/(y))
int main(){
    int n1,n2;
    int sum,diff,pro;
    float q;
    printf("Enter two numbers:");
    scanf("%d %d",&n1,&n2);
    sum=add(n1,n2);
    diff=sub(n1,n2);
    pro=mult(n1,n2);
    q=divide(n1,n2);
    printf("Addition=%d\n",sum);
    printf("Difference=%d\n",diff);
    printf("Product=%d\n",pro);
    printf("Division=%f",q);
    return 0;
}
