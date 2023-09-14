#include <stdio.h>

int main(void) {
	int t,x,n,m,i=0;
	scanf("%d",&t);
	while(i<t){
	    scanf("%d %d",&x,&n);
	    m=x/10;
	    printf("%d\n",m*n);
	    i++;
	}
	return 0;
}
