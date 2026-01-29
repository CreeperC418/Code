#include <stdio.h>

#define MAX 100
int a[MAX];
int top = -1;
void Pop(){
    if (top == -1)
    {
        return;
    }
    --top;
}
void Push(int n){
    if (top == MAX - 1)
    {
        printf("stack overflow");
    }
    a[++top] = n;

}
void Print(){
    for (size_t i = 0; i <= top; i++)
    {
        printf("%d\n", a[i]);
    }
    
}
int main(){
    Push(2);
    Push(7);
    Push(4);
    Push(0);
    Pop();
    Print();
    

    return 0;
}