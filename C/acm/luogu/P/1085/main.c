#include <stdio.h>

int a[8] = {0};
int c = 0;
int c1 = 0;
int max = 0;
int flag = 0;
int  main(){
    for (size_t i = 1; i < 8; i++)
    {
        scanf("%d %d", &c, &c1);
        a[i] = c + c1;
        if (flag < a[i] && a[i] > 8)
        {
            flag = a[i];
            max = i;

        }
        
    }
        printf("%d\n", max);
    return 0;
}