#include<stdio.h>

int main()
{
    int n,i;
    scanf("%d",&n);
    int a1[n],a2[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a1[i]);
    }
    for(i=0;i<n;i++)
    {
        scanf("%d",&a2[i]);
    }
    
    for(i=0;i<n;i++)
    {
        printf("%d ",a1[i]+a2[i]);
    }
}