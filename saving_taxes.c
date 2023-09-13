#include <stdio.h>

int main(void) {
	int i,t,x,y,amount;
	scanf("%d",&t);
	while(i<t){
	    scanf("%d %d",&x,&y);
	    amount=x-y;
	    printf("%d\n",amount);
	    i++;
	}
	return 0;
}
