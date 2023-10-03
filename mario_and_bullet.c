#include <stdio.h>

int main(void) {
	int t,v,d,z,tt;
	scanf("%d",&t);
	while(t--){
	    scanf("%d%d%d",&v,&d,&z);
	    tt=d/v;
	    if(z<tt){
	        printf("0\n");
	    }
	    else{
	        printf("%d\n",z-tt);
	    }
	}
	return 0;
}
