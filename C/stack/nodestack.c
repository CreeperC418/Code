#include "node.h"

int main(){
    Node *head = NULL;
    head = Push(3);
    head = Push(5);
    head = Push(7);
    head = Push(3);
    head = Push(2);
    Print(head);
    Pop();
    Pop();
    Pop();
    Pop();
    Pop();
    return 0;
}