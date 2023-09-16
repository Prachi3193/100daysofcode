#include <stdio.h>

int main(void) {
	int i=0,x,y,m,t;
	scanf("%d",&t);
	while(i<t){
	    scanf("%d%d%d",&x,&y,&m);
	    if(y>m*x){
	        printf("YES\n");
	    }
	    else{
	        printf("NO\n");
	    }
	    i++;
	}
	return 0;
}
