#include <stdio.h>
#include <string.h>

int main(){
    long long a[30] = {0};
    int n;
    scanf("%d\n", &n);
    for (int i = 0; i < n ; i++)
    {
        scanf("%d", &a[i]);
    }
   for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - i - 1; j++) {
                char str1[25], str2[25], temp1[50], temp2[50];
                
                sprintf(str1, "%lld", a[j]);
                sprintf(str2, "%lld", a[j + 1]);
                
                sprintf(temp1, "%s%s", str1, str2);
                sprintf(temp2, "%s%s", str2, str1);
                
                if (strcmp(temp1, temp2) < 0) {
                    long long t = a[j];
                    a[j] = a[j + 1];
                    a[j + 1] = t;
                }
        }
    }
    
    for (int i = 0; i < n; i++) {
        printf("%lld", a[i]);
    }
    printf("\n");
    
    return 0;
}