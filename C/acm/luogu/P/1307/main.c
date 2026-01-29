#include <stdio.h>
#include <stdlib.h>

int reprintf(int x){
    int ans = 0;
    for (;x > 0;)
    {        
        ans = ans + x % 10;
        x /= 10;
        ans *= 10;
    }
    ans /= 10;
    return ans;
}
int main(){
    int x;
    scanf("%d", &x);
    if (x > 0)
    {
        printf("%d\n", reprintf(x));
        
    }else if (x < 0)
    {
         x = abs(x);
        printf("-%d\n", reprintf(x));
    }else
    {
        printf("%d\n", 0);
    }
    
    return 0;
}