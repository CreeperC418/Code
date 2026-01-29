//T 的根结点为 R，其类型与串 S 的类型相同；
//若串S的长度大于1
//将串 S 从中间分开
//分为等长的左右子串S1和S2
//由左子串S1构造R的左子树T1,由右子串S2构造R的右子树T2。
//tree(char *root)
#include <stdio.h>

void tree(int *s, int start, int end){
    int mid = start + (end - start) / 2,c0=0,c1=0;
    if (start != end){
        tree(s, start, mid);
        tree(s, mid + 1, end);
    }
    for(int i=start;i<=end;i++){
		if(s[i]== 0) 
            c0++;
		else 
            c1++;
	}
	if(c0&&c1)
        printf("F");
	else if(c0) 
        printf("B");
	else 
        printf("I");

}
int main(){
    char str[1026] = {0};
    int arr[1026] = {0};
    int n,len = 1;
    scanf("%d", &n);
    scanf("%s", str);
    for (int i = 0; i < n; i++)
    {
        len *= 2;
    }
    
    for (int i = 0; str[i] != 0; i++)
    {
        arr[i] = str[i] - '0';
    }
    tree(arr, 0, len - 1);
    printf("\n");
    return 0;
}