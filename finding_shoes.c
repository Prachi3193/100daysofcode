#include <stdio.h>

int main(void) {
	int t,n,m,s;
	scanf("%d",&t);
	while(t--){
	    scanf("%d%d",&n,&m);
	    s=2*n;
	    if(n<m){
	        printf("%d\n",n);
	    }
	    else{
	         printf("%d\n",s-m);
	    }
	}
	return 0;
}
