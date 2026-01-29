#include <stdio.h>

int main(){
    int a[10];
    int height;
    int count = 0;
    scanf("%d %d %d %d %d %d %d %d %d %d", &a[0], &a[1], &a[2], &a[3], &a[4], &a[5], &a[6], &a[7], &a[8], &a[9]);
    scanf("%d", &height);
    for (size_t i = 0; i < 10; i++)
    {
        if (a[i] <= height + 30)
        {
            count++;
        }
    }
    printf("%d\n", count);
    return 0;
}