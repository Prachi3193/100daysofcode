#include <stdio.h>

int main(void) {
	int t,n,x,y,m;
	scanf("%d",&t);
	while(t--){
	     scanf("%d %d %d",&n,&x,&y);

	     if(n*x ==y || y%x==0){
	         printf("YES\n");
	     }
        else{
            printf("NO\n");
        }
	}
	return 0;
}
