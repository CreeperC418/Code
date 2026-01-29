#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int check(int var,int k,int a,int n) {
        int x = a;        
        int cnt = 0;
        for (int jx = 0; jx < n; jx++)
        {
            
            if (abs((var % 10) - (x % 10)) == 1 || abs((var % 10) - (x % 10) == 9))
            {
                cnt++;
            } else if (abs((var % 10) - (x % 10)) >= 2)
            {
                return 0;
            }
            var /= 10;
            x /= 10;
        }
        return cnt <= k;
}
int main(){
    int n,a,k;
    int b = 1;
    scanf("%d %d %d", &n, &a, &k);
    for (int i = 0; i < n; i++)
    {
        b *= 10;
    }
    
    for (int i = 0; i < b; i++)
    {
       if (check(i,k,a,n))
       {
        printf("%d\n", i);
       }
    }
    
    return 0;
}