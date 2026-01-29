#include <stdio.h>
#include <string.h>

int main() {
    int ans[100] = {0};
    int a[100] = {0};
    int b[100] = {0};
    int result[100] = {0};
    a[0] = 1;
    int len_a = 1;
    int len_b = 0;
    int len_result = 1;
    int len_ans = 0;
    int n;
    scanf("%d", &n);
    for (int j = 1; j <= n; j++)
    {
        for (int i = 1; i <= j; i++) {
            int p=i;
            while(p>0){
                b[len_b++]=p%10;
                p/=10;
            }
            for (size_t i = 0; i < len_b; i++)
            {
                for (size_t j = 0; j < len_a; j++)
                {
                    result[i + j] += a[j] * b[i];
                    if (result[i + j] >= 10) {
                        result[i + j + 1] += result[i + j] / 10;
                        result[i + j] = result[i + j] % 10;
                    }
                }
            }
            len_result = len_a + len_b + 1;
            while(result[len_result-1]==0&&len_result>1){
                len_result--;
            }
            for (int i = 0; i < len_result; i++)
            {
                a[i] = result[i];
                result[i] = 0;
            }
            len_a = len_result;
            len_b = 0;
        }
        memset(b, 0, sizeof(b) );
        memset(result, 0, sizeof(result) );
        len_ans = len_a > len_ans ? len_a : len_ans;
        for (size_t i = 0; i < len_a; i++)
        {
            ans[i] += a[i];
            if (ans[i] >= 10) {
                ans[i + 1] += ans[i] / 10;
                ans[i] = ans[i] % 10;
            }
        }
        memset(a, 0, sizeof(a) );
        len_a = 1;
        a[0] = 1;
    }
    while(!ans[len_ans-1]&&len_ans>1) len_ans--;
    for(int i=len_ans-1;i>=0;i--) printf("%d", ans[i]); 
    printf("\n");
    return 0;
}