#include<stdio.h>
#define MAX 100
int main()
{
    int i,n,tosearch,arr[MAX],found=0;
    printf("enter size of array: ");
    scanf("%d",&n);
    printf("print elements in array: ");
    for(i=0;i<n;i++){
    scanf("%d",&arr[i]);}
    printf("element to search: ");
    scanf("%d",&tosearch);
    for(i=0;i<n;i++)
    {
        if(arr[i]==tosearch)
        {
            found=1;
            break;
        }

    }
    if(found==1)
    {
        printf("%d exists",tosearch);
    }
    else
    {
        printf("it is not there");
    }
}
