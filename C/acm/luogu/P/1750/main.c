#include <stdio.h>

int main() {
    int top = -1;
    int n, c;
    long long min;
    scanf("%d %d", &n, &c);
    int l, r, k;
    long long a[n];
    long long st[c];
    for (int i = 0; i < n; i++) {
        scanf("%lld", &a[i]);
    }
    for (int i = 0; i < n || top > -1;)
    {
        if (top == -1)
        {
            st[++top] = a[i];
            i++;
        }else
        {
            k = c - top - 1;
            if (k == 0)
            {
                printf("%lld ", st[top--]);
            }else{
                min = 9999999999;
                l = i;
                r = k + i - 1;
                if (r >= n)
                    r = n - 1;
   
                    for (int ix = l; ix <= r; ix++)
                        if (a[ix] < min)
                            min = a[ix];
                
                if (top > -1 && st[top] <= min)
                {
                    printf("%lld ", st[top--]);
                }else
                {
                    if (i < n)
                    {
                        st[++top] = a[i];
                        i++;
                    }else{
                        printf("%lld ", st[top--]);
                    }
                }           
            }
        }
    }
    
    printf("\n");
    return 0;
}