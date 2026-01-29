#include <stdio.h>

int main() {
    int a,b;
    scanf("%d%d", &a, &b);
    printf("%.3lf%%\n", (double)b *100 / a);
    return 0;
}