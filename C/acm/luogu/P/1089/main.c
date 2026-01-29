#include <stdio.h>

int expense = 0,remaining = 0;
int deposit = 0;
int main(){
    for (int i = 1; i <= 12; i++)
    {
        scanf("%d", &expense);
        remaining = remaining + 300 - expense;
        if (remaining < 0)
        {
            printf("-%d\n", i );
            return 0;
        }
        if (remaining >= 100)
        {
            deposit += (remaining / 100) * 100;
            remaining -= (remaining / 100) * 100;
            
        }
        
    }
    printf("%d\n",  deposit / 5 + deposit + remaining);
    
    return 0;
}