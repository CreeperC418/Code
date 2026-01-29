#include <stdio.h>
#include <string.h>
int main(){
    int ix= 0;
    int x = 0, y = 0;
    int count = 0;
    char str[13];
    char str2[50];
    scanf("%d", &ix);
    for (int i = 0; i < ix; i++)
    {
        scanf("%s", str);
        if (str[0] >= 'a' && str[0] <= 'z')
        {
            scanf("%d %d", &x, &y);
        }else{
            sscanf(str, "%d", &x);
            scanf("%d", &y);
        }
        if(str[0]=='a')
			sprintf(str2,"%d+%d=%d",x,y,x + y);
		else if(str[0]=='b')
			sprintf(str2,"%d-%d=%d",x,y,x - y);
		else if(str[0]=='c')
			sprintf(str2,"%d*%d=%d",x,y,x * y);
        printf("%s", str2);
        printf("%d", (int)strlen(str2));
    }
    
    return 0;
}