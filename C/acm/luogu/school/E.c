#include <stdio.h>

int main(){
    int x,y,z;
    scanf("%d %d %d", &x, &y, &z);
    if (x > y + z)
    {
        printf("%d\n", y + z);
    }else{
        printf("%d\n", x);
    }
    if (y > x + z)
    {
        printf("%d\n", x + z);
    }else{
        printf("%d\n", y);
    }
    if (z > x + y)
    {
        printf("%d\n", x + y);
    }else 
    {
        printf("%d\n", z);
    }
    
    
    
    
    return 0;
}