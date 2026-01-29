#include <stdio.h>

//y = x; y = -x ,y  = n x = m;
int main(){
    int n,m,k;
    scanf("%d %d %d", &n, &m, &k);
    int f[n + 1][m + 1];
    for (int i = 0; i < n + 1; i++)
    {
        for (int j = 0; j < m + 1; j++)
        {
            f[i][j] = 0;
        }
    }
    int x,y;
    int c, c1,c2,c3;
    for (int j = 0; j < k; j++)
    {    
        scanf("%d %d", &x, &y);
        c = -y-x;
        c1 = x - y;

        for (int i = 1; i <= m; i++)
        {

            if (i + c < 0)
            {
                c2 = -(i + c);
            }else{
                c2 = i + c;
            }
            if (i + c1 < 0)
            {
                c3 = -(i + c1);
            } else{
                c3 = i + c1;
            }
            f[c2][i] = 1;
            f[c3][i] = 1;
            f[y][i] = 1;
        }
        for (int i = 1; i <= n; i++)
        {
            f[i][x] = 1;
        }
    }
    int ans = 0;
    for (int i = 1; i < n + 1; i++)
    {
        for (int j = 1; j < m + 1; j++)
        {
            if(f[i][j] == 0){
                ans++;
            }
        }
    }
    printf("%d\n", ans);
    return 0;
}