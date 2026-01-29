
#include <stdio.h>

int main(){
    int n,k;
    scanf("%d %d", &n, &k);
    int s = n; //未换的烟头
    int j = 0; //换出来的烟头
    if (s >= k)
    {
        while (s >= k)
        {
            j = s / k;
            n += j;
            s = s % k + j;
        }
        printf("%d\n", n);
    }else{
        printf("%d\n", n);
    }
    
    return 0;
}