#include <stdio.h>

int main(){
    int ans = 0;
    int n,t;
    double a;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        scanf("%lf %d", &a, &t);
        for (int ix = 1; ix <= t; ix++)
        {
            ans ^= (int)(a * (double)ix);
        }
        
    }
    printf("%d\n", ans);
}