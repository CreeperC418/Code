#include <stdio.h>

int main(){
    int l,r;
    int cnt = 0;
    scanf("%d %d", &l, &r);
    for (int i = l; i <= r; i++)
    {
        for (int ix = i; ix > 0;)
        {
            int temp = ix % 10;
            ix /= 10;
            if (temp / 2.0 == 1.0)
            {
                cnt++;
            }
            
        }
    }
    printf("%d\n", cnt);
    return 0;
}