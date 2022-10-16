#include<stdio.h>

int count_digits(int temp)
{
    int c=0;
    while (temp>0)
    {
        c++;
        temp/=10;
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
    int c=0;
    for(i=0;i<n;i++)
    {
        if (count_digits(arr[i])%2==0)
        {
            c++;
        }
    }
    printf("%d",c);
    return 0;
}