#include <stdio.h>

int main(void) {
	int t,n,m,x,i=0;
	scanf("%d",&t);
	while(i<t){
	    scanf("%d %d",&n,&x);
	    m=n/6;
	    if(n%6==0){
	        printf("%d\n",m*x);
	    }
	    else{
	        printf("%d\n",(m+1)*x);
	    }
	    
	    i++;
	}
	return 0;
}

