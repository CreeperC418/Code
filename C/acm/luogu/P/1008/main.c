#include <stdio.h>

int main(){
    int arr[10] = {0};
    int flag = 0;
    for (size_t i = 192; i <= 327; i++)
    {
        int o = i;
        int t = i * 2;
        int th = i * 3;
        for (int i = 0; i < 3; i++)
        {
            arr[o % 10]++;
            o /= 10;
            arr[t % 10]++;
            t /= 10;
            arr[th % 10]++;
            th /= 10;
        }
        for (int i = 0; i <= 9; i++)
        {
            if (arr[i] > 1 || arr[0] >= 1){
                flag = 1;   
            }
            arr[i] = 0;
        }
        if (!flag)
        {
          
            printf("%d %d %d\n", i, i * 2, i * 3);
        }
          flag = 0;
    }
    
    return 0;
}