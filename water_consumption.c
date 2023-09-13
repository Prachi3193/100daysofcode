#include <stdio.h>

int main(void) {
	int i=0,t,n;
	scanf("%d",&t);
	while(i<t){
	    scanf("%d",&n);
	    if(n>=2000){
	        printf("YES\n");
	    }
	    else{
	        printf("NO\n");
	    }
	    i++;
	}
	return 0;
}
