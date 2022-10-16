#include<stdio.h>

int main()
{
    int n,i;
    scanf("%d",&n);
    int arr[i];
    for (i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    i=1;
    while (i<=n)
    {
        int j;
        for(j=0;j<arr[i-1];j++)
        {
            printf("%d ",arr[i]);
        }
        i+=2;
    }
    
    return 0;
}