#include<stdio.h>
#define MAX 100
int main()
{
    int n,arr[MAX],i,j,temp;
    printf("enter number of elements: ");
    scanf("%d",&n);
    printf("enter elements: ");
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    for(i=0;i<n;i++)
        printf("%d ",arr[i]);
        printf("\n");
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(arr[i]>arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n%d",arr[n-1]);
}
