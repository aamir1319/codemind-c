#include<stdio.h>

int main()
{
    int n,i,j;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int m;
    for(i=0;i<n;i++)
    {
        m = 0;
        for(j=i+1;j<n;j++)
        {
            if (arr[j]>m)
            {
                m=arr[j];
            }
        }
        if (i==n-1)
        {
            arr[i]=-1;
        }
        else{
            arr[i]=m;
        }
    }
    for (i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    
    return 0;
}