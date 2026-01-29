#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int b[19] = {0};
    long long ans = 1;
    for (int i = 2 * n;i >= n + 2; i--)
    {
        for (int j = n; j >= 1; j--)
        {
            if (j == 1)
            {
                ans *= i;
                break;
            }
            if (i % j == 0 && b[j] != 1)
            {
                b[j] = 1;
                ans *= i / j;
                break;
            }
        }
    }
    long long a = 1;
    for (int i = 1; i <=n ; i++)
    {
        if (b[i] == 0)
        {
            a *= i;
        }
        
    }
    ans /= a;
    printf("%lld\n", ans);
    return 0;
}