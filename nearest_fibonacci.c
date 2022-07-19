#include<stdio.h>

int isfib(int *arr,int after,int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        if (after==arr[i])
        {
            return 1;
        }
    }
    return 0;
}

void find_fib(int *fib,int n)
{
    int i;
    fib[0] = 0,fib[1] = 1;
    for (i=2;i<n;i++)
    {
        fib[i] = fib[i-1] + fib[i-2];
    }
}

int main()
{
    
    int n,before,after;;
    scanf("%d",&n);
    int fib[n];
    find_fib(fib,n);
    before=n,after=n;
    while (after++)
    {
        if(isfib(fib,after,n))
        {
            break;
        }
    }
    while (before--)
    {
        if(isfib(fib,before,n))
        {
            break;
        }
    }
    
    if ((after-n)==(n-before))
    {
        printf("%d %d",before,after);
    }
    else if((after-n)>(n-before))
    {
        printf("%d",before);
    }
    else if((after-n)<(n-before))
    {
        printf("%d",after);
    }
    
    return 0;
}