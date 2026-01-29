#ifndef LIST_H
#define LIST_H
#include <stdlib.h>
#define max 10
typedef int type;

typedef struct
{
    type *data;
    int length;
}list;
list *init();
int add(list *l,type x);
int list_remove(list *l,int ix);
int insert(list *l,int ix,int num);

#endif