#include <stdio.h>

int main(void) {
	int t,i=0,a,b;
	scanf("%d",&t);
	while(i<t){
	    scanf("%d %d",&a,&b);
	    printf("%d\n",a+b);
	    i++;
	}
	return 0;
}
