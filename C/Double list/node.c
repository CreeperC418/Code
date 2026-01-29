#include "node.h"

Node *Init(int n){
	//初始化节点
	Node *l = (Node*) malloc(sizeof(Node));
	l->data = n;
	l->prev = NULL;
	l->next = NULL;
	return l;
}
Node *InsertHead(Node *l, int n){
	//插入头
	Node *p = Init(n);
	p->next = l;
	l->prev = p;
	return p;
}
Node *InsertFoot(Node *l, int num)
{
    Node *p = l;
    while (p->next != NULL)
    {
        p =  p->next;
    }
    Node *new = Init(num);
    new ->prev = p;
	p->next = new;
    return l;
}
Node * Insert(Node * l ,size_t ix ,int num){
	Node *p = Init(num); //创建节点
	Node *q = l;
	for(size_t i = 0;i < ix;i++){
		q = q->next;
	}
	p->prev = q->prev;
	q->prev = p;
	p->next = q;
	p->prev->next = p;
	return l;
	
}
void Print(Node *l){
	while (l != NULL)
	{
		printf("%d\n", l->data);
		l = l->next;
	}
	return;
}
Node *Delete(Node *l, size_t ix){
	Node *p = l;
	for (size_t i = 0; i < ix; i++)
	{
		p = p->next;
	}
	p->prev->next = p->next;
	p->next->prev = p->next;
	free(p);
	return l;
}