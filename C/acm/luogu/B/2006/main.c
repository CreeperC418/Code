#include<stdio.h>

int main() {
    int x,a,y,b;
    scanf("%d %d %d %d",&x,&a,&y,&b);
    double q = (double)(a * x - b * y) / (a - b);
    printf("%.2lf\n", q);
    return 0;
}