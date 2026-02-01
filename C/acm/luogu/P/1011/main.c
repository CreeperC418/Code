#include <stdio.h>

int main(){
    long long f[5][30] = {0};
    f[0][1] = 1;
    f[0][2] = 1;
    int a,n,m,x;
    scanf("%d %d %d %d", &a, &n, &m ,&x);
    if (n <= 2)
    {
        printf("%d\n", m);
        return 0;
    }
    
    for(int i = 3; i <= n + 2;i++){
        f[0][i] = f[0][i - 1] + f[0][i - 2];
    }
    f[1][1] = 1;
    f[1][2] = 0;
    f[2][1] = 0;
    f[2][2] = 1;
    f[3][1] = 1;
    f[3][2] = 1;
    f[4][1] = 0; 
    f[4][2] = 0; 
    for(int i = 3; i <= n + 2;i++){
        f[1][i] = f[0][i - 2];
        f[2][i] = f[0][i - 1];
        f[3][i] = f[3][i - 1] + f[1][i - 2];
        f[4][i] = f[4][i - 1] + f[2][i - 2]; 
    }
    long long ans = (m - f[3][n - 1] * a) / f[4][n - 1];
    printf("%lld\n", f[3][x] * a + f[4][x] * ans);
    
    return 0;
}