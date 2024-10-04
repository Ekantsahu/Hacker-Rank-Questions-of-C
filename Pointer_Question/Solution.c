#include <stdio.h>

void update(int *a,int *b) {
    // Complete this function 
    int sum = *a+*b;
    int sub = *a-*b;
    if (sub<0){
        sub = -sub;
    }
    *a = sum;
    *b = sub;
    
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}
