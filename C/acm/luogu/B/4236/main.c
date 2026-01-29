#include <stdio.h>

int main(){
	int a;
	scanf("%d", &a);
	int i  = a;
	int sum = 0;
	while(i >= 5){
		i = i / 5;
        	sum = sum + i;
	}
	printf("%d\n", sum);
	return 0;
}
