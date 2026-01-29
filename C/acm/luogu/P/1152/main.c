#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;
    int b;
    scanf("%d", &n);
    int a[1002] = {0};
    int flag = 0;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    int diff[1002] = {0};
    for (int i = 1; i < n; i++)
    {
        b = abs(a[i] - a[i -1]);
        if (1 > b || b > n-1)
        {
            flag = 1;
            break;
        }
        if (diff[b] == 1)
        {
            flag = 1;
            break;
        }
        diff[b] = 1;
        
    }
    if (flag == 0)
    {
        printf("Jolly\n");
    }else{
        printf("Not jolly\n");
    }
    
    return 0;
}