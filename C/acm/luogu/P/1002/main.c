#include <stdio.h>
/*
int f[21][21] = {0};

void path_sum(int n, int m){
    if (n > 1)
    {
        path_sum(n - 1, m); 
    }
    if (m > 1)
    {
        path_sum(n, m - 1);
    }
    int left = f[n - 1][m];
    int right = f[n][m - 1];
    if (f[n - 1][m] == -1)
    {
        left = 0;
    }
    if (f[n][m - 1] == -1)
    {
        right = 0;
    }    
    f[n][m] = left + right;
}
*/
int main(){
    int n,m;
    int hn,hm;
    scanf("%d %d %d %d", &n, &m, &hn, &hm);
    const int fx[] = {0, -2, -1, 1, 2, 2, 1, -1, -2};
    const int fy[] = {0, 1, 2, 2, 1, -1, -2, -2, -1};
    
    long long f[40][40];
    int s[40][40];
    m += 2; n += 2; hm += 2; hn += 2;
    s[hn][hm] = 1;
    for(int i = 1; i <= 8; i++) s[hn + fy[i]][hm + fx[i]] = 1;
    f[2][1] = 1;//初始化
    //path_sum(n,m);
    for (int i = 2; i <= n; i++)
    {
        for (int j = 2; j <= m; j++)
        {
            if (s[i][j])
                continue;
                f[i][j] = f[i - 1][j] + f[i][j - 1];
            
        }
        
    }
    
    printf("%lld\n", f[n][m]);
    return 0;
}
