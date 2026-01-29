#include <stdio.h>

int main(){
    int n,m;
    int arr[1002][1002];
    char str[1002] = {0};
    int top = 0,front = 0,left = 0;
    scanf("%d %d\n", &n, &m);
    
    for (int i = 0; i < n; i++)
    {
        scanf("%s", &str);
        for (int j = 0; j < m; j++)
        {
            arr[i][j] = str[j] - '0';
        }
    }
    for (int  i = 0; i < n; i++)
    {
        int max = 0;
        for (int j = 0; j < m; j++)
        {
            if (arr[i][j] > 0)
                top++;
            if (arr[i][j] > max)
                max = arr[i][j] 
        }
        left += max;
    }
    
    return 0;
}