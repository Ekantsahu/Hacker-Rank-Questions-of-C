#include <stdio.h>

int main(){
    char ch,sent[50],para[100];
    scanf("%c\n",&ch);
    scanf("%s\n",&sent);
    scanf("%[^\n]s",&para);
    
    printf("%c\n%s\n%s",ch,sent,para);
    return 0;
}