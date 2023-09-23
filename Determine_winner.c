#include <stdio.h>

int main(void) {
	int t,pa,pb,qa,qb,penp,penq;
	scanf("%d",&t);
	while(t--){
	    scanf("%d%d%d%d",&pa,&pb,&qa,&qb);
	    if(pa>pb){
	        penp=pa;
	    }
	    else{
	        penp=pb;
	    }
	    if(qa>qb){
	        penq=qa;
	    }
	    else{
	        penq=qb;
	    }
	    if(penp>penq){
	        printf("Q\n");
	    }
	    else if(penp<penq){
	        printf("P\n");
	    }
	    else{
	        printf("TIE\n");
	    }
	}
	return 0;
}
