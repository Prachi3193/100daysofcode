#include <stdio.h>
int main(void) {
	int t;
	scanf("%d",&t); // test cases
	for(int i=1;i<=t;i++){
	    int a,b;
	    scanf("%d",&a); //patty
	    scanf("%d",&b); //buns
	    if(a>=1 && b>=1){
	        if(a>b){
	            printf("%d\n",b);
	        }else{
	            printf("%d\n",a);
	        }
	    }
	    
	}
