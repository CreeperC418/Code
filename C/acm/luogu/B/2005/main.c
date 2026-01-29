#include<stdio.h>

int main() {
    char str;
    scanf("%c", &str);
    for (size_t i = 0,weight = 2; i < 3; i++,weight--)
    {
        printf("%*s", weight,"");
        for (size_t j = 0; j < i * 2 + 1; j++)
        {
            printf("%c", str);
        }
        printf("\n");
        
    }
    
    return 0;
}