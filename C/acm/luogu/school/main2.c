#include <stdio.h>

int prime(int m) {
   int i;
   if(m == 0 || m == 1) return 0; 
   for(i = 2; i < m; i++) {
       if(m % i == 0) return 0; 
   }
   return 1;
}
int main(){
    int a,b;
    int count = 0;
    
    scanf("%d %d", &a, &b);
    for (int i = a; i <= b; i++)
    {
        count += prime(i);
    }
    printf("%d\n", count);
    return 0;
}