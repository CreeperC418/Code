#include "node.h"

Node *top = NULL;
Node *Init(){
    Node * l = (Node*) malloc(sizeof(Node));
    l->data = 0;
    l->next = NULL;
    return l;
}
Node * InsertHead(Node *l,int num){
    Node *p = (Node*) malloc(sizeof(Node));
    p->data = num;
    p->next = l->next;
    l->next = p;
    l->data++;
    return l;

	}
Node * Insert(Node * l ,size_t ix ,int num){
	Node *p = (Node*) malloc(sizeof(Node)); //创建节点
	p->data = num;
	if(l->data == 0 && ix != 1){
		printf("Node is null");
		return l;
	}else if(l->data < ix){
		printf("Node is shorter than ix");
		return l;
	}
	Node *q = l; //遍历链表
	for(size_t i = 0;i < ix - 1;i++){
		q = q->next;
	}
	p->next = q->next;
	q->next = p;
	l->data++;
	return l;
	
}

Node *InsertFoot(Node *l, int num)
{
    Node *p = l;
    while (p->next != NULL)
    {
        p =  p->next;
    }
    Node *new_l = (Node*) malloc(sizeof(Node));
    new_l->data = num;
    new_l->next = p->next;
    p->next = new_l;
    l->data++;
    return l;
}

Node *Delete(Node *l, size_t index)
{
    if (index<1 || index>l->data || l == NULL)
        return l;
    Node *p = l;
    for (size_t i = 0; i < index-1; i++)
    {
        p=p->next;
    }
    Node *q = p->next;
    p->next = q->next;
    free(q);
    l->data--;
    return l;
}
int FreeNode(Node *l) {
    Node *p= l->next;
    Node *q;
    while (p != NULL) {
        q = p->next;
        free(p);
        p=q;
    }
    l->next = NULL;
    l->data=0;
    return 0;
}
int FindBack(Node *list,size_t ix){
    if (list == NULL || list->next == NULL || ix <= 0) {
        return 0;
    }
    Node *fast = list->next;
    Node *slow = list->next;
    
    for (size_t i = 0; i < ix; i++)
    {
        fast = fast->next;
    }
    while (fast != NULL)
    {
        fast =  fast->next;
        slow = slow->next;
    }
    
        printf("%d \n",slow->data);
        return 1;
}
Node * Reverse(Node *l){
	Node *current = l->next;
	Node *prev = NULL;
	Node *next;
	while(current != NULL){
		next = current->next;
		current->next = prev;
		prev = current;
		current = next;
	}
	l->next = prev;
	return l;
}
void Print(Node *p){
	if (p == NULL) return;
	Print(p->next);
	printf("%d\n", p->data);
}
Node *Push(int n){
    Node *p = (Node*) malloc(sizeof(Node));
    p->data = n;
    p->next = top;
    top = p;
    return top;
}
Node *Pop(){
    Node *p = (Node*) malloc(sizeof(Node));
    p = top;
    top = top->next;
    free(p);
    return top;
}