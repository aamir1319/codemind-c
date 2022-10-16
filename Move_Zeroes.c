#include<stdio.h>

int main()
{
    int n,i,j=0;
    scanf("%d",&n);
    int arr[n],res[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        if (arr[i]!=0)
        {
            res[j++] = arr[i];
        }
    }
    for(i=0;i<j;i++)
    {
        printf("%d ",res[i]);
    }
    for(i=j;i<n;i++)
    {
        printf("0 ");
    }
    
    
    return 0;
}