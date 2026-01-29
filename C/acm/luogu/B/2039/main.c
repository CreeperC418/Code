#include<stdio.h>

int main(){
    long long x;
    int y;
    scanf("%d %d",&x ,&y);
        if(x > y)
            printf(">");
        if(x < y)
            printf("<");
        if(x == y)
            printf("=");
    return 0;
}