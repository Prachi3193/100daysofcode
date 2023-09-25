#include <stdio.h>

int main(void) {
	int t,x,y;
	scanf("%d",&t);
	while(t--){
	    scanf("%d%d",&x,&y);
	    printf("%d\n",(y/2)+1);
	}
	return 0;
}
