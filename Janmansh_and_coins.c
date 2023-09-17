#include <stdio.h>

int main(void) {
	int t,x,y,i=0;
	scanf("%d",&t);
	while(i<t){
	    scanf("%d %d",&x,&y);
	    printf("%d\n",(10*x)+(5*y));
	    i++;
	}
	return 0;
}
