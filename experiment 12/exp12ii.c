#include <stdio.h>
#define square(x) ((x)*(x))
int main(){
  int n1=5;
  int n2=10;
  int sq=square(n1);
  int a=square(n2);
  printf("Square of n1 is %d\n",sq);
  printf("Square of n2 is %d\n",a);
  return 0;
}
