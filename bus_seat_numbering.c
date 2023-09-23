#include <stdio.h>

int main(void) {
	int t,n;
	scanf("%d",&t);
	while(t--){
	    scanf("%d",&n);
	    if(n>=1 && n<=10){
	        printf("Lower Double\n");
	    }
	    else if(n>=11 && n<=15){
	        printf("Lower Single\n");
	    }
	    else if(n>=16 && n<=25){
	        printf("Upper Double\n");
	    }
	    else if(n>=26 && n<=30){
	        printf("Upper Single\n");
	    }
	}
	return 0;
}
