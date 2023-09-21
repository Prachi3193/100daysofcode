#include <stdio.h>

int main(void) {
	int t,i=0,x,n,count,j;
	
	scanf("%d",&t);
	while(i<t){
	    scanf("%d %d",&n,&x);
	    int arr[n];
	    for(j=0;j<n;j++){
	        scanf("%d",&arr[j]);
	    }
	    count=0;
	    for(j=0;j<n;j++){
	        if(arr[j] >=x){
	            count++;
	        }
	    }
	    i++;
	    printf("%d\n",count);
	}
	return 0;
}
