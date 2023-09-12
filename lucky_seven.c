#include <stdio.h>

int main(void) {
	char lucky[10];
	int i;
	for(i=0;i<10;i++){
	    scanf("%c",&lucky[i]);
	}
	printf("%c",lucky[6]);
	return 0;
}
