#include <stdio.h>

int main(){
    int k;
    int sub1,sub2,sub3;
    int flag = 0;
    scanf("%d", &k);
    for (int i = 10000; i <= 30000; i++)
    {
        sub1 = i / 100;
        sub2 = (i / 10) % 1000;
        sub3 = i % 1000;
        if(sub1 % k == 0 && sub2 % k == 0 && sub3 % k == 0){
            printf("%d\n", i);
            flag = 1;
        }
    } 
    if (flag == 0)
    {
        printf("No\n");
    }
    return 0;
}