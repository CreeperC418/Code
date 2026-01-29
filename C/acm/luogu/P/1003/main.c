#include <stdio.h>

int main(){
    int f[20000][4];
    int n,x,y;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d %d %d %d", &f[i][0], &f[i][1], &f[i][2], &f[i][3]);
    }
    scanf("%d %d", &x, &y);
    for (int i = n - 1; i >= 0; i--)
    {
        if ((x >= f[i][0] && y >= f[i][1]) && ((x - f[i][0]) <= f[i][2] && (y - f[i][1]) <= f[i][3]))
        {
                printf("%d\n", i + 1);
                return 0;
        }

    }
    printf("%d\n", -1);
    return 0;
}