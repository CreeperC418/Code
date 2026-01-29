#include "node.h"
#include <stdio.h>
#include <stdlib.h>
#include<time.h>
int main(){   
    Node *list = Init();
    list = InsertFoot(list, 2);
    list = InsertFoot(list, 7);
    list = InsertFoot(list, 9);
    list = InsertFoot(list, 4);
    list = InsertFoot(list, 3);
    list = Insert(list, 3, 10);
    list = Reverse(list);
    Node *p = list;
    Print(list); 
    FreeNode(list);
    return 0;
}
