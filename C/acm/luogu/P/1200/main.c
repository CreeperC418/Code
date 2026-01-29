#include <stdio.h>

int main(){
    char name[10] = {0};
    char name1[10] = {0};
    int nm = 1;
    int nm1 = 1;
    scanf("%s %s", &name, &name1);
    for (int i = 0; i < 6; i++)
    {
        if (name[i] != 0)
        {
            nm *= (int)(name[i] - 'A' + 1);
        }
        if (name1[i] != 0)
        {
            nm1 *= (int)(name1[i] - 'A' + 1);
        }
    }
    if (nm % 47 == nm1 % 47)
    {
        printf("GO\n");
    }else{
        printf("STAY\n");
    }
    
    return 0;
}