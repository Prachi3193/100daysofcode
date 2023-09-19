#include <stdio.h>

int main(void) {
    int i=0,t,n,x,bill;
    scanf("%d",&t);
    while(i<t){
        scanf("%d%d",&n,&x);
        bill=n*x;
        if(bill>=10000 && bill<=99999){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
        i++;
    }
	return 0;
}
