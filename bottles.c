#include <stdio.h>

int main(void) {
	int t,n,x,k;
	scanf("%d",&t);
	while(t--){
	    scanf("%d%d%d",&n,&x,&k);
	    if(k>=(n*x)){
	        printf("%d\n",n);
	    }
	    else{
	        printf("%d\n",k/x);
	    }
	}
	return 0;
}
