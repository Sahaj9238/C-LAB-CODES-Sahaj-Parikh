#include <stdio.h>
#include <string.h>
void REVERSE(char *str){
    int len=strlen(str);
    char temp;
    int i=0;
    int j=len-1;
    for(i;i<j;i++){
        temp=str[i];
        str[i]=str[j];
        str[j]=temp;
        j--;
    }
}
int main(){
    char str[100];
    printf("Enter a string:");
    scanf("%s",str);
    printf("Original string=%s\n",str);
    REVERSE(str);
    printf("Reversed string=%s",str);
    return 0;
}