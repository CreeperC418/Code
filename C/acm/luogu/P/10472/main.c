#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Stack {
    char *data;
    int size;
    int top;
} stack;

stack* Init(int size) {
    stack *temp = (stack*)malloc(sizeof(stack));
    if (temp == NULL) {
        return NULL;  
    }
    
    temp->data = (char*)malloc(sizeof(char) * size);
    if (temp->data == NULL) {
        free(temp);   
        return NULL;
    }
    
    temp->top = -1;
    temp->size = size;
    return temp;
}

char Pop(stack *ST) {
    if (ST->top == -1) { 
        return '\0';     
    }
    
    char ch = ST->data[ST->top];
    ST->top--;
    return ch;
}

int Push(stack *ST, char ch) {
    if (ST->top >= ST->size - 1) {
        return 0;  
    }
    
    ST->top++;  
    ST->data[ST->top] = ch;
    return 1;
}

void Destroy(stack *ST) {
    if (ST != NULL) {
        free(ST->data);
        free(ST);
    }
}
int IsEmpty(stack *ST) {
    return ST->top == -1;
}

int IsFull(stack *ST) {
    return ST->top == ST->size - 1;
}
int main(){
    char ch[30000];
    scanf("%s", &ch);
    int len = strlen(ch);
    stack *s;
    s = Init(30000);
    int max = 0,flag = 0,cnt = 0;
    for (int ix = 0; ix < len; ix++)
    {    
        cnt = 0;
        s->top = -1;
        for (int i = ix; i < len; i++)
        {

            if (ch[i] == '{' || ch[i] == '[' || ch[i] == '(')
                Push(s, ch[i]);
            if (ch[i] == '}')
            {
                if (s->data[s->top] == '{')
                {
                    Pop(s);
                    cnt+=2;
                }
                else
                {
                    break;
                }
            }
            if (ch[i] == ')')
            {
                if (s->data[s->top] == '(')
                {
                    Pop(s);
                    cnt+=2;
                }
                else
                {
                        break;
                }
            }
            if (ch[i] == ']')
            {
                if (s->data[s->top] == '[')
                {
                    Pop(s);
                    cnt+=2;
                }
                else
                {
                        break;
                }
            }
            if (s->top == -1)
            {
                if (cnt > max)
                max = cnt;
            }
        }
    }
    printf("%d\n", max);
    
    return 0;
}