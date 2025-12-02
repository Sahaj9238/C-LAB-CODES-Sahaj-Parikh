#include <stdio.h>
int main(){
    FILE *fp;
    fp=open("abc.txt","w");
    fprintf(fp,"Text");
    fclose(fp);
    return 0;
}
