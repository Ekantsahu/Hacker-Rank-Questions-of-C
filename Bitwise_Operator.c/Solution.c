/*

5
12345

a b
1 2       
1 3
1 4
1 5

a b 
2 3
2 4
2 5

a b 
3 4
3 5

a b 
4 5

*/

#include <stdio.h>

void calculate_the_maximum(int n, int k) {
     int i,j,M1=0,M2=0,M3=0;
     
     for(i=1;i<=n;i++){
         for(j=i+1;j<=n;j++){
             int and = i&j;
             int or = i|j;
             int xor = i^j;
             
             if (and<k && M1<and) {
                 M1 = and;
             }
             if (or<k && M2<or) {
                 M2 = or;
             }
             if (xor<k && M3<xor) {
                 M3 = xor;
             }
            
         }
     }
             printf("%d\n",M1); 
             printf("%d\n",M2);
             printf("%d\n",M3);
}

int main() {
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
 
    return 0;
}
