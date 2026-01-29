#include "list.h"

list *init(){
    list *l = (list*) malloc(sizeof(list));
    l->data = (type*) malloc(sizeof(type)*max);
    l->length = 0;
    return l;
}

int add(list *l,type x)
{
    if (l->length>=max)
    {
        return 1;
    }else 
    {
        l->data[l->length] = x;
        l->length++;
        return 0;
    }
    
    
}

int list_remove(list *l,int ix){
    if (ix < 0 || ix > l->length) {
        return 1;  
    }
    for (size_t i = ix; i <= l->length; i++)
    {
            l->data[i]=l->data[i+1];
    }  
    l->length--;
    return 0;
}
int insert(list *l,int ix,int num){
        if (ix < 0 || ix > l->length) {
        return 1;  // 插入位置无效
    }
    
    // 2. 检查数组是否已满
    if (l->length >= max) {
        return 2;  // 数组已满，无法插入
    }
        for (size_t i = l->length; i >ix; i--)
        {
            l->data[i]=l->data[i-1];
        }  
        l->data[ix]=num;
        l->length++;
        return 0;
}