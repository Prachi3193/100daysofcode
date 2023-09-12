#include <stdio.h>

int main(void) {
	int t,i=0,x,y;
	scanf("%d",&t);
	while(i<t){
	    scanf("%d %d",&x,&y);
	    if(x+y>6){
	        printf("YES\n");
	    }
	    else{
	        printf("NO\n");
	    }
	    i++;
	}
	return 0;
}
