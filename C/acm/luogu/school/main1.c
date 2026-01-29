#include <stdio.h>
#include <math.h>

int main(){
    int n,a,k;
    int temp = 0;
    scanf("%d %d %d", &n, &a, &k);
    int a[n][2] = {0};
    for (int i = n; i > 0; i--)
    {
        temp = a + pow(10, i + 1);
        temp = (temp - pow(10, i)) % pow(10, i + 1);
        a[i][0] = temp;

    }
    
    return 0;
}