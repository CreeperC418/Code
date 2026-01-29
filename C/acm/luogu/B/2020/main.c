#include <stdio.h>

int main() {
    int a[5];
    scanf("%d %d %d %d %d", &a[0], &a[1], &a[2], &a[3], &a[4]);
    int sum = 0;
    for(int i = 0; i < 5; i++) {
        sum += a[i] % 3;
        a[i] = a[i] / 3;
        if (i == 0)
        {
            a[4] += a[0];
            a[1] += a[0];
        }else if (i == 4)
        {
            a[0] += a[4];
            a[3] += a[4];
        }else{
            a[i + 1] += a[i];
            a[i - 1] += a[i];
        }
    }
    printf("%d %d %d %d %d\n", a[0], a[1], a[2], a[3], a[4]);
    printf("%d\n", sum);
    return 0;
}