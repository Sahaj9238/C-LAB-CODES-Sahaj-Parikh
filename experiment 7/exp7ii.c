#include <stdio.h>
struct employee{
    char name[100];
    float bp;
    float da;
    float gs;
};
int main(){
    struct employee e[100];
    printf("Enter the employee details:");
    for(int i=0;i<100;i++){
        printf("Name:");
        scanf("%s",&e[i].name);
        printf("Basic Pay:");
        scanf("%f",&e[i].bp);
        e[i].da=e[i].bp*0.52;
        e[i].gs=e[i].bp+e[i].da;
    }
    printf("\n%s | %s\n","Employee name","Gross Salary");
    for(int i=1;i<101;i++){
        printf("%s | %f\n",e[i].name,e[i].gs);
    }
    return 0;
}