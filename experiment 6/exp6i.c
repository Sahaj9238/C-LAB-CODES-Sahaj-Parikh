/*1.Develop a recursive and non-recursive function FACT(num) to find the factorial of a number, n!, defined by FACT(n) = 1, if n = 0. Otherwise, FACT(n) = n * FACT(n-1). Using this function, write a C program to compute the binomial coefficient. Tabulate the results for different values of n and r with suitable messages. */
#include<stdio.h>
long long int fact_recursive(int n)
{
    if(n==0)
    {
        return 1;
    }
    else
    {
    return(long long int)n*FACT(n-1);
    }
    
}

long long fact_nonrecursive(int n)
{
    long long int result=1;
    for(int i=1;i<=n;i++){
        result*=i;
    }
    retutn result;
}

int main()
{
    printf("Factorial of 5(recursive):%ld\n"fact_recursive(5));
    printf("Factorial of 5(non=recursive):%ld\n"non_recursive(5));
    return 0;
}
