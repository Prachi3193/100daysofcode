#include <stdio.h>

int main(void) {
	int t,n,x;
	scanf("%d",&t);
	while(t--){
	    scanf("%d%d",&n,&x);
	    if(n==x){
	        printf("YES\n");
	    }
	    else if(x%n==0){
	        printf("YES\n");
	    }
	    else{
	        printf("NO\n");
	    }
	}
	return 0;
}
