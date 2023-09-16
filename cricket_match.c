#include <stdio.h>

int main(void) {
	int i=0,m,n,t;
	scanf("%d",&t);
	while(i<t){
	    scanf("%d %d",&m,&n);
	    if(m<=36*n){
	        printf("YES\n");
	    }
	    else{
	        printf("NO\n");
	    }
	    i++;
	}
	return 0;
}
//logic:
// 1 m=6 balls
// 1 ball <=6 n
// 1/6m<=6n

