#include <stdio.h>

int main(void) {
	int t,a,b,c,d;
	scanf("%d",&t);
	while(t--){
	    scanf("%d %d %d %d",&a,&b,&c,&d);
	    if(a>b){
	        if(c>d){
	            printf("%d\n",a+c);
	        }
	        else{
	            printf("%d\n",a+d);
	        }
	    }
	    else{
	        if(c>d){
	            printf("%d\n",b+c);
	        }
	        else{
	            printf("%d\n",b+d);
	        }
	    }
	}
	return 0;
}
