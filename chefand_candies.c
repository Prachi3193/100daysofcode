#include <stdio.h>

int main(void) {
	int i=0,t,n,x,req,pac;
	scanf("%d",&t);
	while(i<t){
	    scanf("%d%d",&n,&x);
	    req=n-x;
	    pac=req/4;
	    if(req<=0){
	        printf("0\n");
	    }
	    else{
	        if(req%4 !=0){
	        pac++;
	    }
	    
	    printf("%d\n",pac);
	    }
	    
	    i++;
	}
	return 0;
}
