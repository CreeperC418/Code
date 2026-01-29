#include <stdio.h>


void sort(int a[], int len) {
    for (int i = 0; i < len - 1; i++) {
        int max = i;  // 记录最小值的位置，第一个元素默认最小
        for (int j = i + 1; j < len; j++) {
            if (a[j] > a[max]) {  // 找到目前最小值
                max = j;  // 记录最小值的位置
            }
        }
        // 交换两个变量
        if (max != i) {
            int temp = a[max];
            a[max] = a[i];
            a[i] = temp;
        }
    }
}

int main(){
    int f[3000],f1[3000];
    int n;
    int ans = 0;
    scanf("%d", &n);
    for (size_t i = 0; i < n; i++)
        scanf("%d", &f[i]);
    for (size_t i = 0; i < n; i++)
        scanf("%d", &f1[i]);
    sort(f,n);
    sort(f1,n);
    for (int i = 0,ix = n - 1,j = 0,jx = n - 1; i <= ix;)
    {
        int t = f[i],q = f1[j];
        if (t > q)
        {
            ans += 1;
            i++;
            j++;
        }else if (t < q)
        {
            ans -= 1;
            ix--;
            j++;
        }else 
        {
            if (f[ix] > f1[jx])
            {
                ans += 1;
                ix--;
                jx--;
            }else{
                if (f[ix] < f1[j])
                    ans -= 1;
                ix--;
                j++;
            }
        }
    }
    printf("%d\n", ans * 200);
    
    
    
    return 0;
}