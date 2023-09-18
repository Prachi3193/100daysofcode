#include <stdio.h>

int main(void) {
	int i=0,t,x,y,m;
	scanf("%d",&t);
	while(i<t){
	    scanf("%d %d",&x,&y);
	    m= (x*y)/100;
	    printf("%d\n",m);
	    i++;
	}
	return 0;
}
