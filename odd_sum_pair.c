#include <stdio.h>

int main(void) {
    int t,i=0,j,k;
    int arr[3];
    scanf("%d",&t);
    while(i<t){
        for(j=0;j<3;j++){
            scanf("%d",&arr[j]);
        }
        int found=0;
        for(j=0;j<3;j++){
            for(k=j+1;k<3;k++){
                if((arr[j]+arr[k]) %2!=0){
                    found=1;
                    break;
                }
            }
            if(found){
                break;
            }
        }
        if(found){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
        i++;
    }
	return 0;
}


