#include <stdio.h>
#include <string.h>
int maxOperations(char* s) {
    int sum = 0;
    int count = 0;
    int len = strlen(s);
    for ( size_t i = 0; i < len; i++)
    {
            if (s[i]== '1')
            {
                count++;
                if(s[i + 1] == '0'){
                    sum += count;
                    count = 0;
                }
            }
    }
    return sum;
}

int main(){
    char c[100002];
    scanf("%s", c);
    printf("%d\n", maxOperations(c));
    return 0;
}