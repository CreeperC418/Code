#include <stdio.h>

int top  = 0,rear = 0;
int j;
int main(){
    int n,k;
    int max = 0;
    scanf("%d %d", &n, &k);
    int maxarr[n];
    int minarr[n];
    int a[n];
    rear = k - 1;
    for (int i = 0; i < n - k; i++)
    {   
        int max = 0,min = 2147483647;
        for (int i = top; i < rear; i++)
        {
            if (a[i] > max)
            {
                max = a[i];
            }
            if (a[i] < min)
            {
                min = a[i];
            } 
        }
        maxarr[i] = max;
        minarr[i] = min;
        top++;
        rear++;
        j = i;
    }
    for (int i = 0; i < j; i++)
    {
        printf("%d ", maxarr[i]);
    }
    printf("\n");
    for (int i = 0; i < j; i++)
    {
        printf("%d ", minarr[i]);
    }
    printf("\n");

    return 0;
}