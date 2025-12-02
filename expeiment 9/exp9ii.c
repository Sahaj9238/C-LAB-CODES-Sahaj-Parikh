#include <stdio.h>
int main(){
    FILE *fp;
    char ch;
    fp=fopen("abc.txt","r");
    if(fp==NULL){
        printf("Empty");
    }
    while((ch=fgetc(fp))!=EOF){
        printf("%c",ch);
    }
    fclose(fp);
    return 0;
}