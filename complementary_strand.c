#include <stdio.h>

int main(void) {
	int t;
	scanf("%d",&t);
	while(t--){
	    int n;
	    scanf("%d",&n);
	    char s[n];
	    for(int i=0;i<n;i++){
	        scanf(" %c",&s[i]);
	    }
	    for(int i=0;i<n;i++){
	        char nucleo = s[i];
	        switch (nucleo){
	            case 'A': printf("T"); break;
	            case 'T': printf("A"); break;
	            case 'C': printf("G"); break;
	            case 'G': printf("C"); break;
	            default: break;
	        }
	    }
	    printf("\n");
	}
	
	return 0;
}
