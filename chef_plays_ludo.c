#include <stdio.h>

int main(void) {
	int i=0,t,x;
	scanf("%d",&t);
	while(i<t){
	    scanf("%d",&x);
	    if(x==6){
	        printf("YES\n");
	    }
	    else{
	        printf("NO\n");
	    }
	    i++;
	}
	return 0;
}
