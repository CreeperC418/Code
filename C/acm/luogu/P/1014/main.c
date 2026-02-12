#include <stdio.h>

int main(){
    int n;
    int k = 1;
    scanf("%d", &n);
    for (; k < n; k++)
        n -= k;
    if(k % 2)
        printf("%d/%d", k+1-n, n);
    else
        printf("%d/%d", n, k+1-n);
    return 0;
}