#include "list.h"
#include <stdio.h>
int main(){
    list * l  = init();
    for (size_t i = 0; i < 7; i++)
    {
        add(l,i);
    }
    list_remove(l,4);
    insert(l,4,1);
    for (int i = 0; i < l->length; i++)
    {
         printf("%d",l->data[i]);
    }
   
    free(l->data);
    free(l);
    return 0;
}
