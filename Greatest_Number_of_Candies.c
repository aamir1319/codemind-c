#include<stdio.h>

int max(int *arr,int n){
    int i,m=arr[0];
    for (i=0;i<n;i++)
    {
        if (m<arr[i])
        {
            m=arr[i];
        }
    }
    return m;
}

int main()
{
    int n,i;
    scanf("%d",&n);
    int arr[n];
    for (i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int count=0;
    int en;
    scanf("%d",&en);
    int m = max(arr,n);
    for (i=0;i<n;i++)
    {
        if (arr[i]+en>=m)
        {
            printf("True ");
        }
        else{
            printf("False ");
        }
    }
    return 0;
}