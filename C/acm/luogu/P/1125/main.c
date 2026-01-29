#include <stdio.h>
int is_quality(int n){   
    for (int  i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }
    if (n != 1)
    {
        return 1;
    }
}
int main(){
    char str[102] = {0};
    int count[26] = {0};
    scanf("%s", str);
    int index;
    for (int i = 0; str[i] != 0; i++)
    {
        index = str[i] - 'a';
        count[index]++;
    }
    int max = 0, min = 101;
    for ( int i = 0; i < 26; i++)
    {
        if (count[i] > max)
        {
            max = count[i];
        }
        if (count[i] != 0 && count[i] < min)
        {
            min = count[i];
        }
    }  
    if (max - min == 0)
    {
        printf("No Answer\n0\n");
    }else if (is_quality(max - min))
    {
        printf("Lucky Word\n%d\n", max - min);
    }else{
        printf("No Answer\n0\n");
    }
    
    return 0;
}