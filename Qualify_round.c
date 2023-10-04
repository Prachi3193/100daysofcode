#include <stdio.h>

int main(void) {
	int t,x,a,b;
	scanf("%d",&t);
	while(t--){
	    scanf("%d%d%d",&x,&a,&b);
	    if(x<=(a+ 2*b)){
	        printf("Qualify\n");
	    }
	    else{
	        printf("NotQualify\n");
	    }
	}
	return 0;
}
