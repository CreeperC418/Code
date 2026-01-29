#include <stdio.h>
#include <math.h>

int main(){
    unsigned long long n;
    unsigned long long ans = 0;
    unsigned long long ftl = 1;
    
    scanf("%d", &n);
    if (n <= 25)
    {    
        for (unsigned long long i = 1; i <= n; i++)
        {
            ftl *= i;
            ans += ftl;
        }   
        printf("%llu\n", ans);
    }else{
        ans = 16158688122606784831230313;
        ftl = 15511210043330985984000000;
        for (unsigned long long i = 26; i <= n; i++)
        {
            ftl *= i;   
            ans += ftl;
        }   
    }
        return 0;
    
}