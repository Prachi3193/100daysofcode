#include <stdio.h>

int main(void) {
	int t,m,n,i=0;
	scanf("%d",&t);
	while(i<t){
	    scanf("%d %d",&m,&n);
	    if(n>m){
	        printf("0\n");
	    }
	    else{
	        printf("%d\n",m-n);
	    }
	    
	    i++;
	}
	return 0;
}

