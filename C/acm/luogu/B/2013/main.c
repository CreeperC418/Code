#include<stdio.h>

int main() {
    double F;
    scanf("%lf", &F);
    double C = (F - 32) * 5.0 / 9.0;
    printf("%.5lf\n", C);
    return 0;
}