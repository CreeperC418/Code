#include <stdio.h>

int main(){
    int n = 1;
    int k;
    double sn = 0;
    scanf("%d", &k);
    while (sn <= k)
    {
        sn += 1.0 / n;
        n++;

    }
    printf("%d\n", n - 1);
    return 0;
}