#include <stdio.h>

int main(){
	for(int i = 1,ix = 2;i < 4;i++,ix--){
		printf("%*s", ix, "");
		for(int j = 0;j < i * 2 -1;j++){
			printf("*");
		}
		printf("\n");
	}
	for(int i = 2,ix = 1;i >= 1;i--,ix++){
		printf("%*s", ix, "");
		for(int j = 0;j < i * 2 - 1;j++){
			printf("*");
		}
		printf("\n");
	}

	
	return 0;
}
