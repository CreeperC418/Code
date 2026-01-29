#ifndef NODE_H
#define NODE_H
#include<stdlib.h>
#include<stdio.h>
typedef struct node
{

    int data;
    struct node * prev;
    struct node * next;
}Node;
Node * Init(int n);
Node * InsertHead(Node *l,int num);
Node * InsertFoot(Node *l,int num);
Node * Delete(Node *l, size_t ix);
Node * Insert(Node *l, size_t ix, int num); 
void Print(Node *l);
int FreeNode(Node *l);
int FindBack(Node *l, size_t ix);

#endif
