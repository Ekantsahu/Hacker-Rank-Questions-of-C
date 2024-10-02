#include <stdio.h>

int main(){
    int a,b ;
    float c,d;
    int sum,sub;
    float add,diff;
    scanf("%d %d %f %f",&a,&b,&c,&d);
    
    sum = a+b;
    sub = a-b;
    
    add = c+d;
    diff = c-d;
    printf("%d %d\n%.1f %.1f",sum,sub,add,diff);
    return 0;
}