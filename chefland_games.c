#include <stdio.h>
#include<stdbool.h>
int main(void) {
	int i=0,t,j;
	scanf("%d",&t);
	while(i<t){
	    bool arr[4];
	    for(j=0;j<4;j++){
	        scanf("%d",&arr[j]);
	    }
	    for(j=0;j<4;j++){
	        if(arr[0]==0 && arr[1]==0 && arr[2]==0 && arr[3]==0){
	        printf("IN\n");
	        
	    }
	    else{
	        printf("OUT\n");
	        
	    }
	    break;
	    }
	    
	    i++;
	}
	return 0;
}
