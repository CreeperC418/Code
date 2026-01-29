#include "node.h"
#include <stdio.h>
#include <stdlib.h>
#include<time.h>
int main(){
    Node * list = init();
    srand(time(NULL));
    for (size_t i = 10; i > 0; i--)
    {
        insertfoot(list,rand() % 20);

    }
    Node *p = list->next;
    while (p != NULL)
    {
        printf("%d ",p->data);
        p = p->next;
    }
    printf("\n");
    ("%d",find_back(list,2));
    freeNode(list);
    
    
    
    return 0;
}