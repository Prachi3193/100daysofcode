#include<stdio.h>

int main() 
{
	int t;
	scanf("%d",&t);
	
	
	while(t--)
	{
	    int n,x;
    	scanf("%d%d",&n,&x);
	    
	    if(x==0 || n==x)
	    {
	        printf("0\n");
	    }
	    else
	    {
	        if(n-x>=x)
	        {
	            printf("%d\n",x);
	        }
	        else
	        {
	            printf("%d\n",n-x);
	        }
	    }
	}
	return 0;
}
