#include "node.h"

int main(){
	Node *l = Init(0);
	l = InsertFoot(l, 2);
	l = InsertFoot(l, 3);
	l = InsertFoot(l, 4);
	l = InsertFoot(l, 6);
	l = InsertFoot(l, 7);
	l = Insert(l ,3 , 20);
	l = Delete(l, 3);
	Print(l);
	return 0;
}
