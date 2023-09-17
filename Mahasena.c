#include <stdio.h>

int main(void) {
    int n,count=0,lcount=0;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        if(arr[i]%2==0){
        lcount++;
    }
    else{
        count++;
    }
    }
    if(lcount>count){
        printf("READY FOR BATTLE");
    }
    else{
        printf("NOT READY");
    } 
	return 0;
}

