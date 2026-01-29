#include <stdio.h>

int main(){
    int n = 0;
    scanf("%d", &n);
    int max = 0;
    int p = 0;
    int flag = 0;
    int k,d,a;
    for (int i = 0; i < n; i++)
    {
        scanf("%d/%d/%d", &k, &d, &a);
        if(k - d >= 10){
            p = k * (k - d) + a;
        }else if (k >= d)
        {
            p = (k - d + 1) * 3 + a;
        }else{
            p = a * 2;
        }
        if (p > max)
        {
            max = p;
            flag = i;
        }       
    }
    printf("%d\n", flag + 1);
    
    return 0;
}