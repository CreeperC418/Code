#include <stdio.h>

int main(){
    int n;
    int nums[10000];
    scanf("%d", &n);
    int cnt = 0;
    int max = 0;
    int flag = 0;
    for (int i = 0; i < n; i++)
        scanf("%d", &nums[i]);
    for (int i = 0; i < n; i++)
    {
        if (nums[i] == nums[i + 1] - 1)
        {
            cnt++;
        }else 
        {
            if (max < cnt)
            {
                max = cnt;
                cnt = 0;
            }
        }
    }
    printf("%d\n", max + 1);
    
    return 0;
}