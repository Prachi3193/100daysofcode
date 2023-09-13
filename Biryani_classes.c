#include <stdio.h>

int main(void) {
	int i=0,t,x,y;
	scanf("%d",&t);
	while(i<t){
	    scanf("%d %d",&x,&y);
	    printf("%d\n",x*y);
	    i++;
	}
	return 0;
}
