#include <stdio.h>
#include <string.h>

void multiply(char *a,char *b) {
    int a1[100];
    int b1[100];
    int len = strlen(a) + strlen(b);
    int result[200] = {0};
    for (int i = 0; i < strlen(a); i++)
        a1[i] = a[strlen(a) - 1 - i] - '0';
    for (int i = 0; i < strlen(b); i++)
        b1[i] = b[strlen(b) - 1 - i] - '0';
    for (size_t i = 0; i < strlen(b); i++)
    {
        for (size_t j = 0; j < strlen(a); j++)
        {
            result[i + j] += a1[j] * b1[i];
            if (result[i + j] >= 10) {
                result[i + j + 1] += result[i + j] / 10;
                result[i + j] = result[i + j] % 10;
            }
        }
    }
     while (result[len] == 0 && len > 1) len--;
    for (int i = 0; i <= len; i++)
        a[i] = result[len - i] + '0';
}
int main() {
    char cnt[100] = "1";
    char result[200] = "1";
    int n;
    scanf("%d", &n);
    for (int i = 0; i <= n; i++) {
        multiply(result, cnt);
        cnt[0]++;
        for (size_t i = 0; i < strlen(cnt); i++)
        {
            if (cnt[i] > '9') {
                cnt[i] = '0';
                cnt[i + 1]++;
            }
        }
        
    }   
    printf("%s\n", result);
    
    return 0;
}