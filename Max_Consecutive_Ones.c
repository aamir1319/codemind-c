#include<stdio.h>

int main()
{
    int i,n;
    scanf("%d",&n);
    int arr[n];
    int maxc=0,c=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        // printf("%d ",arr[i]);
    }
    // printf("
");
    for(i=0;i<n;i++)
    {
        if (arr[i]==1)
        {
            c++;
            // printf("%d",c);
        }
        else{
            if (c>maxc)
            {
                maxc = c;
                c=0;
            }
        }
        if (i==n-1)
        {
            if (maxc<c)
            {
                maxc=c;
            }
        }
    }
    printf("%d",maxc);
    
    return 0;
}