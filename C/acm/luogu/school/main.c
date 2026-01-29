#include <stdio.h>

int main(){
    int s;
    scanf("%d", &s);
    int l = s;
    int w = 1;
    int c = 0; 
    for (w = 1; w < l; w++)
    {
        if (s % w == 0)
        {
            c++;
            l = s / w;
        }
    }
    printf("%d\n", c);
    return 0;
}