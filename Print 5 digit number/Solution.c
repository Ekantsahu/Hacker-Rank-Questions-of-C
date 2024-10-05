#include <stdio.h>

int main() {
	
    int n;
    int sum = 0;
    scanf("%d", &n);
    if (n>=10000&&n<=99999) {
        while (n!=0) {
            sum += n%10;
            n = n/10;
        }printf("%d",sum);
    }
   
}
