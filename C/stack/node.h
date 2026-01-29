#ifndef NODE_H
#define NODE_H
#include<stdlib.h>
#include<stdio.h>
typedef struct node
{
    int data;
    struct node * next;
}Node;
extern Node *top;
Node *Init();
Node *InsertHead(Node *l,int num);
Node *InsertFoot(Node *l,int num);
Node *Delete(Node *l, size_t index);
Node *Insert(Node *l, size_t ix, int num); 
Node *Reverse(Node *l);
Node *Push(int n);
Node *Pop();
void Print(Node *l);
int FreeNode(Node *l);
int FindBack(Node *l, size_t ix);

#endif
