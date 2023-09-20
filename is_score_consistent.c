#include <stdio.h>

int main(void) {
	int i=0,t,a,b,c,d;
	scanf("%d",&t);
	while(i<t){
	    scanf("%d%d",&a,&b);
	    scanf("%d%d",&c,&d);
	    if(c<a || d<b){
	        printf("IMPOSSIBLE\n");
	    }
	    else{
	        printf("POSSIBLE\n");
	    }
	    i++;
	}
	return 0;
}
