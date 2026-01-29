#include <stdio.h>
#include <stdlib.h>

void Merge(int *arr, int start, int mid, int end) {
    int size = end - start + 1;
    int *temp = (int*)malloc(sizeof(int) * size);
    if (temp == NULL) {
        perror("malloc failed");
        return;
    }
    
    int l = start;
    int r = mid + 1;
    int i = 0;
    
    // 合并两个有序子数组
    while (l <= mid && r <= end) {
        if (arr[l] <= arr[r]) {
            temp[i++] = arr[l++];
        } else {
            temp[i++] = arr[r++];
        }
    }
    
    // 复制左半部分剩余元素
    while (l <= mid) {
        temp[i++] = arr[l++];
    }
    
    // 复制右半部分剩余元素
    while (r <= end) {
        temp[i++] = arr[r++];
    }
    
    // 复制回原数组
    for (i = 0; i < size; i++) {
        arr[start + i] = temp[i];
    }
    
    free(temp);  
}

void MergShort(int *arr, int start, int end) {
    if (start >= end)  
        return;
        
    int mid = start + (end - start) / 2;  
    MergShort(arr, start, mid);
    MergShort(arr, mid + 1, end);
    Merge(arr, start, mid, end);
}

int main(){
    int arr[] = {8,5,6,4,3,7,10,2};
    MergShort(arr, 0, 7);  
    for (int i = 0; i < 8; i++)
    {
        printf("%d\n", arr[i]);
    }
    return 0;
}