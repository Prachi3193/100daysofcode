#include <stdio.h>

int main(void) {
	int i=0,t,a,b,x,y;
	scanf("%d",&t);
	while(i<t){
	    scanf("%d %d %d %d",&a,&b,&x,&y);
	    if((a*b) <= (x*y)){
	        printf("YES\n");
	    }
	    else{
	        printf("NO\n");
	    }
	    i++;
	}
	return 0;
}
