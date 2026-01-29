#include <stdio.h>

int main(){
    double r;
    scanf("%lf", &r);
    double pi = 3.14159;
    printf("%.4lf %.4lf %.4lf\n", 2 * r , pi * r *2 , pi * r * r);
    return 0;
}