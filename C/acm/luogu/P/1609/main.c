#include <stdio.h>
#include <string.h>

int main(){
    char s[200],s1[200];
    scanf("%s", s);
    int len = strlen(s) -1;
    int mid = len / 2;
    for (int i = 0; s[i] == '9'; i++)
        if (i == len){
            s[0] = '1';
            for (int i = 1; i <= len; i++)
                s[i] = '0';
        }
    for (int i = 0,j = len; i <= j; i++,j--)
    {
        s1[i] = s[i];
        s1[j] = s[i];
    }
    if (strcmp(s1,s) > 0)
    {
        for (int i = 0; i <= len; i++)
            printf("%c", s1[i]);
        printf("\n");
    }else if (strcmp(s1,s) <= 0)
    {
        s1[mid]++;
        for (int i = mid; i > 0; i--)
        {
            if (s1[i] > '9')
            {
                s1[i - 1] += (s1[i] - '0') / 10;
                s1[i] = '0' + (s1[i] - '0') % 10;
            }
        }
        for (int i = 0,j = len; i <= j; i++,j--)
        {
            s1[j] = s1[i];
        }
        for (int i = 0; i <= len; i++)
            printf("%c", s1[i]);
        printf("\n");
    }
    
    
    return 0;
}