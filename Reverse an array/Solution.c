#include <stdio.h>

int main(){
    int n,i;
    
    scanf("%d",&n);
    int a[n];
    
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    
    for(i=0;i<n/2;i++){
        int temp=0;
        temp = a[i];
        a[i] = a[n-i-1];
        a[n-i-1] = temp;
    }
    
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    return 0;
}