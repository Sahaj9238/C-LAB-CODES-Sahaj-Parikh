#include <stdio.h>

int FIBO(int n)
{ 
    if(n==0)
    {
        return 0;
    }
    else if(n==1){
        return 1;
    }
    else{
        return FIBO(n-1)+FIBO(n-2);
    }
}

int main() 
{
    int num;
    printf("Enter the number :");
    scanf("%d",&num);
     if(num<=0)
    {
        printf("Invalid input");
        return 1;
    }
    for(int i=0;i<=num;i++)
    {
         printf("%d\t",FIBO(i));
    }
    return 0;
}