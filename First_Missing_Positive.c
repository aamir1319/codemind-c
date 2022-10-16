#include<stdio.h>

int not_in(int *arr,int n,int se)
{
    int i;
    for(i=0;i<n;i++)
    {
        if (arr[i]==se)
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    int n,i;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=1;i<=n;i++)
    {
        if (not_in(arr,n,i))
        {
            printf("%d",i);
            break;
        }
    }
    return 0;
}