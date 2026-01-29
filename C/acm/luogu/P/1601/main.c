#include <stdio.h>
#include <string.h>

int main(){
    char a[505];
    char b[505];
    scanf("%s", a);
    scanf("%s", b);
    int sizeA = strlen(a);
    int sizeB = strlen(b);
    int a1[502] = {0};
    int b1[502] = {0};
    int ans[502] = {0};
    for (int i = 0; i < sizeA; i++)
    {
        a1[i] = (int)(a[sizeA - i - 1] - '0');
    }
    for (int i = 0; i < sizeB; i++)
    {
        b1[i] = (int)(b[sizeB - i - 1] - '0');
    }
    int len = sizeA;  
    if (sizeA < sizeB)
    {
        len = sizeB  ;
    }
    for (int i = 0;i < len; i++)
    {
        ans[i] += a1[i] + b1[i];
        if (ans[i] >= 10)
        {
            ans[i + 1] += ans[i] / 10;
            ans[i] %= 10;
        }
    }
    if (ans[len] == 0)
    {
        len--;
    }
             
    for (int i = len; i >= 0; i--)
    {        
        printf("%d", ans[i]);
    }
    printf("\n");
    
    
    
    return 0;
}