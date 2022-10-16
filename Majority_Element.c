#include<stdio.h>

int count(int *arr,int s,int n)
{
    int i,c=0;
    for (i=0;i<n;i++)
    {
        if (s==arr[i])
        {
            c++;
        }
    }
    return c;
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
    for(i=0;i<n;i++)
    {
        int c=count(arr,arr[i],n);
        if(c>n/2){
            printf("%d",arr[i]);
            break;
        }
    }
    return 0;
}