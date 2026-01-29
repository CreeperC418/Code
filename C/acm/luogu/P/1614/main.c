#include <stdio.h>

int main(){
    int n,m;
    scanf("%d %d", &n, &m);
    int nums[3002];
    int min = 3000000;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &nums[i]);
    }
    for (int l = 0,r = m - 1; r < n; l++, r++)
    {
        int sum = 0;
        for (int i = l; i <= r; i++)
        {
            sum += nums[i];
        }
        if (sum < min)
        {
            min = sum;
        }
    }
    printf("%d\n", min);
    
    return 0;
}