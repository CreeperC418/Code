#include <stdio.h>
#include <string.h>

int main(){
    int n;
    char m[100];
    int a[101] = {0},b[101] = {0};
    scanf("%d%s", &n, &m);
    int last = strlen(m);
    for (int i = 0; i < last; i++)
    {
        if (m[i] >= '0' && m[i] <= '9')
        {
            a[i] = m[i] - '0';
        }else{
            a[i] = m[i] - 'A' + 10;
        }
        
    }
    
    for (int ix = 0; ; ix++)
    {
        for (int i = 0; i < last; i++)
        {
            b[i] = a[last - i - 1];
        }
        for (int i = 0; i < last; i++)
        {
            a[i] += b[i];
            a[i + 1] += a[i] / n; 
            a[i] %= n;
        }
        if (a[last] > 0)
        {
            last++;
        }
        int flag = 0;
        for (int i = 0,j = last - 1; i < j; i++,j--)
        {
            if (a[i] != a[j])
            {   
                flag = 1;
                break;
            }
        }
        if (ix + 1 <= 30 && flag == 0)
        {
            printf("STEP=%d\n", ix + 1);    
            break;    
        }else if (ix + 1 > 30 && flag == 1)
        {
            printf("Impossible!\n");
            break;
        }
        flag = 0;
    }
    
    return 0;
}