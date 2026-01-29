#include <stdio.h>
int prime(int x){
    for (int i = 2; i < x; i++)
    {
        if (x % i == 0 && x != 2)
        {
            return 0;
        }
    }
    return 1;
} 
int main(){
    int n;
    int x = 0,y = 0;
    scanf("%d", &n);
    for (int i = 4; i <= n ; i = i + 2)
    {
        for (int ix = 2; ix < i - 1; ix++)
        {
            if (prime(ix))
            {
                x  = ix;
                if (prime(i - ix))
                {
                    y = i - ix;
                    printf("%d=%d+%d\n", i, x, y);
                    break;
                }
            }
        }
        
    }
     
    return 0;
}