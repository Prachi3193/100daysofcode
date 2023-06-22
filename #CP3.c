#include <stdio.h>
int main(void) {
	int t;
	scanf("%d",&t);
	for(int i=1;i<=t;i++){
	    int a,b;
	    float m,n;
	    scanf("%d",&a);
	    scanf("%d",&b);
	    m=a/0.1;
	    n=b/0.2;
	    if(m>n){
	        printf("FIRST\n");
	    }
	    else if(m<n){
	        printf("SECOND\n");
	    }
	    else{
	        printf("ANY\n");
	    }
	}
	return 0;
}
