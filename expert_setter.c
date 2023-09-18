#include <stdio.h>

int main(void) {
    int t,x,y,i=0;
    float m;
    scanf("%d",&t);
    while(i<t){
        scanf("%d %d",&x,&y);
        m=(float)x/2;
        if(y>=m){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
        i++;
    }
	return 0;
}
