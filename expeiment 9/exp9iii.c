#include <stdio.h>
void main(){
    FILE *fp=fopen("abc.txt","r");
    char c[256];
    if(fp!=NULL){
        while(fgets(c,sizeof(c),fp)){
            printf("%s",c);
        }
        fclose(fp);
    }
    else{
        printf("Empty");
    }
}